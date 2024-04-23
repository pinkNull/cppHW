#include <iostream>
#include <string>
using namespace std;

void swap_char_p(char* &ap, char* &bp){
	char *tmp = ap;
	ap = bp;
	bp = tmp;
}

int main(){
	char * ap = (char*)"hello";
	char * bp = (char*)"how are you?";
	swap_char_p(ap, bp);
	cout << "ap: "<< '\t' << ap << endl << "bp:" << '\t' << bp << endl;
}
