// 1st homework 
// date : 2023.03.07

#include <functional>
#include <iomanip>
#include <iostream>
#include "gtypes.h"
#include "strlib.h"
using namespace std;

void list_function_value(double begin_num, double end_num);
void function1();
void function2();
void function3();

int witch_expression = 1;

int main(){
	int witch_function = 1;
	cout << "choose the function you want to check (options : 1, 2, 3)" << endl;
	cin >> witch_function;
	switch(witch_function){
		case 1 : function1();
		case 2 : function2();
		case 3 : function3();
		default : "wrong function to choose"
	}
	return 0;
}

void function1(){
	double begin_num = 0.0, end_num = 0.0;
	cout << "choose your expression (options : 1, 2, 3)" << endl;
	cin >> witch_expression;
	cout << "enter the begin number and the end number (seperated with blank)" << endl;
	cin >> begin_num >> end_num;
	list_function_value(begin_num, end_num);
	return 0;
}

void function2(){
	int input_integer = 1;
	cout >> "enter an interger:" >> endl;
	cin >> input_integer;
	string dividing_number = "";
	for (int i = 1; i <= 3; i++){
		if (input_integer % (2*i +1) == 0)
			dividing_number += integerToString(2*i + 1);
	}
	cout << "the number can be divided by " << dividing_number << endl;
}

double expression(double i){
	switch(witch_expression){
		case 1 : return i*(i + 2);
		case 2 : return 2*i;
		case 3 : return i - 1;
		default : cout << "error : wrong expression choose" << endl;
	}
	return i*(i+2);
}

void step(double &i){
	i++;
}

void list_function_value(double begin_num, double end_num){
	int output_width = 5;
	cout << setw(output_width) << "x" << "\t" << "y" << endl;
	for(double i = begin_num;i <= end_num;step(i)){
		cout << setw(output_width) << i << "\t" << expression(i) << endl;
	}
}
