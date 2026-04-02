//
#include <iostream>
#include <string>
using namespace std;
bool isfrequency(int freq1, int freq2){
    if(freq1==freq2){
        return true;
    }else{
        return false
    }
}
class permotaion{
    public:
    bool permution(string s1, string s2 ){
        int freq[26]={0};
        for(int i=0; i<s2.length(); i++){
            int idex=s1[i]-'a';
            freq[idex]++;
        }
        int windowsize=s1.length();
        for(int i=0; i<s2.length(); i++){
            int windowids=0;
            idex=0;
            int windowfreq[26]={0};
            while(windowids<windowsize && idex <s2.length()){
                windowfreq[s2[idex] -'a']++;
                windowids++;
                idex++;
            }
            if(isfrequency(freq, windowfreq)){
                return true;
            }

        }
    }
    return false;
};
int main(){
    string s1= "ab";
    string s2="eidbaoo";
    permotaion obj;
    obj.permution(s1, s2);
    return 0;
}
