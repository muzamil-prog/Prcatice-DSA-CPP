#include <iostream>
using namespace std;
class bank{
    private:
    string AcountNo;
    double balance;
    public:
    bank(string AcountNo, double balance){
        this->AcountNo=AcountNo;
        this->balance =balance;
    }
    double get() const{
        return balance;
    }
    void deposite(double amount){
        balance+=amount;
        cout<<"Cureent balance is after the depsite the amount:"<<balance<<endl;
    }
    void withdraw(double amount){
        if(amount<balance && amount>0){
            balance-=amount;
            cout <<"th curent amount is after the withdraw:"<<balance<<endl;
        }
    }
    void show(){
        cout <<"Balance is:"<<balance<<endl;
    }
};
int main(){
    bank b("123455", 2000);
    b.get();
    b.deposite(500);
    b.withdraw(300);
    b.show();
    return 0;

}