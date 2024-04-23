#include <iomanip>
#include <iostream>
#include <cmath>
#include <stack>
using namespace std;

void question1(){
	const double defination	= 1e-8;
	double x = 0, result = 1, adder = 1;
	cout << "please enter the x" << endl;
	cin >> x;
	adder = x;
	for (int i = 2; adder >= defination; i++){
		result += i%2==0?adder:-adder;
		adder = (adder/i)*x;
	}
	cout << fixed << setprecision(8) << result << endl;
}

void question2(int n = 1){
	int result = 1;
	for (int i = n; i > 1; i--){
		result = result*i + 1;
	}
	cout << result << endl;
}

int question2_recursion (int n =1 ){
	if (n > 0)
 		return n*question2_recursion(n-1);
	else
		return (int)1;

}

stack <int> divide_number(int n = 1){
	stack <int> result;
	while(n >= 1){
		result.push(n%10);
		n = n / 10;
	}
	return result;
}

bool if_flower_number(int n = 1){
	stack <int> divide_num = divide_number(n);
	int tmp = 0;
	while(!divide_num.empty()){
		tmp = divide_num.top();
		divide_num.pop();
		n -= tmp*tmp*tmp;
	}
	if (n == 0)
		return true;
	else
		return false;
}

void question3(){
	cout << "requested number are listed as following" << endl;
	for (int i = 1; i <= 32768; i ++){
		if (if_flower_number(i))
			cout << i <<endl;
	}
}

/*
stack<int> get_factor(int n = 1){
	stack<int> result;
	for (int i = 1; i < n; i++){
		if (n%i==0)
			result.push(i);
	}
	return result;
}
*/

int factor_sum (int n = 1){
	int result = 0;
	for (int i = 1; i < n; i++){
		if (n%i==0)
			result += i;
	}
	return result;
}

void question4(){
	const int max_n = 1000;
	for(int i = 1; i < max_n; i++){
		if ((i - factor_sum(i))==0)
			cout << "perfect number is : " << i << endl;
	}
}

void question5(){
	const int row_total = 30;
	for(int i = 1; i <= row_total; i ++){
		for(int j = 0; j < row_total - i; j ++)
			cout << "  ";
		for(int j = 0; j < 2*i-1; j++)
			cout << "# ";
		cout << endl;
	}
	cout << endl << endl << endl;
	for (int row = 0; row < 20; row++){
		for (int blank = 0; blank < row; blank++)
			cout << " ";
		for (int numsign = 0; numsign <= 40 - row; numsign++)
			cout << "# ";
		cout << endl;
	}
}
void question6(){
	const int cell_width = 5;
	int output_type = 1;
	cout << "choose the kind of output" << endl;
	cin >> output_type;
	cout << setw(cell_width) << "*" ;
	for (int i = 1; i < 10; i++)
		cout << setw(cell_width) << i ;
	cout << endl;
	for (int i = 1; i < 11; i++)
		cout <<  "-----";
	cout << endl;
	for (int row = 1;row < 10; row++){
		cout << setw(cell_width) << row;
		for (int column = 1; column < 10; column++)
			switch (output_type){
				case 0 : cout << setw(cell_width) << column*row ; break;
				case 1 : if (row >= column) 
						 cout << setw(cell_width) << column*row;
					 else
						 cout << setw(cell_width) << " ";
					 break;
				case 2 : if (row <= column) 
						 cout << setw(cell_width) << column*row;
					 else
						 cout << setw(cell_width) << " ";
					 break;
			}
	cout << endl;
	}
}

/*
void debug(){
for (int i = 1; i<= 12; i++){
	question2(i);
}
}
*/

int main(){
	int question_num = 1;
	cout << "please enter the question number" << endl;
	cin >> question_num;
	switch (question_num) {
		case 1 : question1(); break;
		case 2 : question2(12); break;
		case 3 : question3(); break;
		case 4 : question4(); break;
		case 5 : question5(); break;
		case 6 : question6(); break;
//		case 10001: debug(); break;
		case 10002: cout << question2_recursion(5) << endl; break;
		default : cout << "not an valid input" << endl;
	}
	return 0;
}
