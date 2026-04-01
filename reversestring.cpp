#include <iostream>
#include <string>
using namespace std;
class StringR{
    public:
    void print(srtring str){
        int n=str.length();
        string ans=" ";
        reverse(str.begin(), str.end());
        for(int i=0; i<n; i++){
            string wrold=" ";
            while(i<n && s[i] !=" "){
                world+=s[i];
                i++;
            }
            reverse(world.begin(), world.end()){
                if(world.length()>0){
                    ans+=" "+word;
                    cout <<ans<<endl;
                }
            }
            
        }
        
    }
        
    };
    int main(){
        string  str="hello world";
       stringR obj;
       obj.print(str);
       return 0;        
    }
