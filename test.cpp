#include <iostream>
#include <map>
#include <string>
#include <stack>

using namespace std;

int main(){
    map<char, char> m;
    m['e'] = 'z';
    stack<char> st;
    st.push('e');
    string s = "Hello World!";
    // cout << (s[1]=='(') << endl;
    char tmp = st.top();
    cout << m[tmp] << endl;
    return 0;
}