#include <iostream>
using namespace std;
class localTelephone{
    public:
    int phone;
void    input(){
        cout <<"enter your phone number:"<<endl;
        cin >>phone;

    }
    void show(){
        cout <<"the phone number is:"<<phone<<endl;
        
    }
};
class natphone:public localTelephone{
public:
int ctyCode;
void input(){
    cout <<"enterhe your city code:"<<endl;
    cin >>ctyCode;
}
void show(){
    cout <<"the city code is:"<<ctyCode<<endl;
}
};
class intphone:public natphone{
    public:
    int countryCode;
    void input(){
        localTelephone::input();
        natphone::input();
        cout<<"enter your countrey code:"<<endl;
        cin >>countryCode;
    }
    void show(){
        localTelephone::show();
        natphone::show();
        cout <<"the country code is :"<<countryCode<<endl;

    }
};
int main(){
    intphone obj;
    obj.input();
    obj.show();
    return 0;
}