#include <iomanip>
#include<iostream>
using namespace std;

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
int main(){
	question1();
}
