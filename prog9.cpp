// search string any character 
#include <iostream>
using namespace std;
int main(){
    char str[20]="hello muzammil";
    char ch, *ptr,s;
     s='i';
     ptr=str;
    ch='y';
    cout <<"enter the character is: "<<ch<<endl;
   
    while(*ptr++ !='\0')// it found zero then exist 
    if(*ptr==ch){
        s='y';
        if(s=='y'){
            cout <<"the character is found:"<<endl;
        }
    }else{
            cout <<"the charcter is not found:";
        }
    return 0;
}