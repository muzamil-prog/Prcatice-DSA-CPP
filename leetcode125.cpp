// palindrome problem
// which string of character can read on both side with same meaning this is called paindrom
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
bool isAlphanumaric(char ch){
    if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
        return true;
    }else{
        return false;
    }
}
using namespace std;
int main(){

    string s="Ac3?e43c&a";// ignor special character
    int start=0; int end=s.length()-1;
    bool ispalidrom=true;
    while(start<=end){
        if(!isAlphanumaric(s[start])){
            start++;
            continue;

        }
        
        if(!isAlphanumaric(s[end])){
            end--;
            continue;

        }
        if(tolower(s[start])!=tolower(s[end])){
            ispalidrom=false;
            break;
        }
        start++;
        end--;
    } 
    if(ispalidrom){
        cout <<"is palimdrom "<<endl;
    }
    else{
        cout <<"is not palidorm:"<<endl;
    }

}