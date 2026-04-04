// internaly implement  from doubly linklist
// which push pop empalce on boht side of list 
#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l={1,2,3,4};
    for(int i:l){
        cout <<i<<" ";
    }
    cout <<endl;
    l.push_back(5);
    l.push_front(6);
    l.pop_back();
    l.pop_front();
    auto it=l.begin();
    advance(it, 1);// move itrater
    l.insert(it,12);// itrater and value
        //  l.erase(l.begin()+3);
    // l.clear();
    it=l.begin(); //itrater
    advance(it, 3);// move itrater at three index
    l.erase(it); // delt at thrree indes which value
    for(int y: l){
        cout <<y<<" ";
    }
    cout <<endl;
    return 0;
}