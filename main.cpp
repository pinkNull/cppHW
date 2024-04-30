#include <iomanip>
#include<iostream>
#include<stack>
using namespace std;

void blank(unsigned int n = 3){
	while(n>0){
		cout << endl;
		n--;
	}
}

void ch_2_4(){
	const int student_num = 500;
	cout << "\"How many students here?\"" << endl;
	cout << '\"' << student_num << '\"' << endl;
}

void ch_3_4(){
	for(int x = -10; x<=10; x++){
		cout << "x = " << x << "; y = ";
		if(x<=-1)
		  cout<<(x-1)<<endl;
		if(x>-1 && x<=2)
		  cout<<2*x<<endl;
		if(2<x && x<=10)
		  cout<<x*(x+2)<<endl;
	}
}

void ch_3_5(){
	for(int n = 1; n < 136; n++){

		int c1 = n%3 ==0;
		int c2 = n%5 ==0;
		int c3 = n%7 ==0;

		cout << n;
		switch((c1<<2)+(c2<<1)+c3){
			case 0: cout << "不能被3,5,7整除." << endl; break;
			case 1: cout << "只能被7整除." << endl; break;
			case 2: cout << "只能被5整除." << endl; break;
			case 3: cout << "可以被5,7整除." << endl; break;
			case 4: cout << "只能被3整除." << endl; break;
			case 5: cout << "可以被3,7整除." << endl; break;
			case 6: cout << "可以被3,5整除." << endl; break;
			case 7: cout << "可以被3,5,7整除." << endl; break;
		}
	}
}

void ch_3_6(){
	for(int grade = 1; grade <= 100; grade++){
		cout << "分数是" << grade << "分，五分制成绩为：";
  		if(grade>100 || grade<0)
  			cout << "无效的成绩！" << endl;
  		else if(grade>=90)
  			cout << "A。" << endl;
  		else if(grade>=80)
  			cout << "B。" << endl;
  		else if(grade>=70)
  			cout << "C。" << endl;
  		else if(grade>=60)
  			cout << "D。" << endl;
  		else
  			cout << "E。" << endl;
	}
}

//ch_4_1 - ch_4_3	ch_4_8 - ch_4_9
void question1(){
	const double defination	= 1e-8;
	double x = 0, result = 1, adder = 1;
//	cout << "please enter the x" << endl;
//	cin >> x;
	for(int j = 1; j <= 10; j++){
		x = ((float)j)/10;
		adder = x;
		for (int i = 2; adder >= defination; i++){
			result += i%2==0?adder:-adder;
			adder = (adder/i)*x;
		}
		cout << fixed << setprecision(8) << result << endl;
	}
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
	int output_type = 0;
//	cout << "choose the kind of output" << endl;
//	cin >> output_type;
	while(output_type < 3){
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
		cout << endl << endl << endl;
		output_type++;
	}
}

/*
void debug(){
for (int i = 1; i<= 12; i++){
	question2(i);
}
}
*/

void ch4(){
	int question_num = 1;
//	cout << "please enter the question number" << endl;
//	cin >> question_num;
	while(question_num < 7){
		switch (question_num) {
			case 1 : question1(); break;
			case 2 : question2(12); break;
			case 3 : question3(); break;
			case 4 : question4(); break;
			case 5 : question5(); break;
			case 6 : question6(); break;
//			case 10001: debug(); break;
			case 10002: cout << question2_recursion(5) << endl; break;
			default : cout << "not an valid input" << endl;
		}
		question_num++;
	}
}

int main(){
	ch_2_4();
	blank();
	ch_3_4();
	blank();
	ch_3_5();
	blank();
	ch_3_6();
	blank();
	ch4();
	return 0;
}
