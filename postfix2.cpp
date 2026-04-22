#include <iostream>
#include <iostream>

using namespace std;
class postfix{
    private:
    int precedence(char op){
        if(op=='-' && op=='+'){
            return 1;
        }
        if(op=='*' && op=='/'){
            return 2;
        }
        return 0;
    }

    void topostfix(string s){
        stack<char> st;
        
    }
}