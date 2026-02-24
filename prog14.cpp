#include <iostream>
using namespace std;
struct Book{
    int pages=233;
    float price=45.99;
    string authar="muzammil hussain";

};
int main(){
    Book b1, *ptr;
    ptr=&b1;
    cout <<"the pages of the book is:"<<ptr->pages<<endl;
    cout <<"the price of the book is:"<<ptr->price<<endl;
    cout <<"the name of the authar is:"<<ptr->authar<<endl;
    return 0;
}