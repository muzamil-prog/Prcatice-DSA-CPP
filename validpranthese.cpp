#include <iostream>
#include <vector>
#include <string>
#include<stack>
using namespace std;
class validPrantheses{
    public:
    bool isvalid(string s){
       stack<char> ch;
    for(char i : s){
        if(i =='(' || i == '{' || i =='['){
            ch.push(i);
        }else {
            if(ch.empty()) {
                return false;
            }
            if((i==')' && ch.top()!='(') || (i=='}'  && ch.top() !='{') || (i==']' && ch.top() !='[')){
                return false;
            }
            ch.pop();
        }

    }
        return ch.empty();
    
        
} 
};
int main(){
    string ch={"[{()}]"};
    
    validPrantheses obj;
   bool result= obj.isvalid(ch);
   cout <<result<<endl;
    return 0;
}