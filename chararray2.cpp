// jb hmm char array string input lety hain tu wo space ky bad ignor krta ha value so us ky leya hmm cin.getline(name, len, delim) lgaty or delim ky madet sy esy control bi kr sktya hain


#include <iostream>
#include <string>
using namespace std;
int main(){
    char str[100];
    cout <<"enter the string";
   // cin >>str;// only hello
    cin.getline(str, 100, '$');
    cout <<str<<endl;
    // print lenth of the string
    int len=0; 
    char ch[12]={"heloo world"};
    for(int i=0; ch[i] != '\0'; i++){
     len++;
     cout <<len<<endl;
     cout <<ch[i]<<endl;
    }
    string str2="hello ";
    str2="hello";
    
}