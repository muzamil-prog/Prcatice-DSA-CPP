#include <iostream>
#include <vector>
using namespace std;
class vecter{
    public:
    void vecter2(){
        vector<int> vec={1,2,3,4,5};
        vec.push_back(6);
        vec.pop_back();
        // we can intailize in sidde the vector in vector 
        // vector<int> vec1(vec); // that works same 
        // erase function  if we delt the elemnet then use erase function we delt //elemtne at any posiion of array
        // if delt 2 and 3 so
        vec.erase(vec.begin()+1, vec.begin()+3);
        
         // if add the element at any position in arrya
         // insert function use which give postion and value 
        //  vec.insert(begin()+3, 100);

          vec.insert(vec.begin()+2, 100);
           cout <<vec.size()<<endl;
           cout <<vec.capacity()<<endl;
        //    vec.clear();  // celar all element but array of size and cpaacity not effect
        //    vec.empty();
        for(int val: vec){
            cout <<val<<" ";
        }
        cout <<endl;
    }
    void show(){
        // itrator begin or end return krty hain
        // end mean last varlue nhi array (n-1) yani ya us sy bi agy koi random value return krta ha 
        vector<int> vec={1,2,3,4,5};
        cout <<*(vec.begin())<<" "<<*(vec.end())<<endl;
        vector<int> ::iterator it;
    for(it=vec.begin(); it !=vec.end(); it++){
        cout <<*(it)<<" ";
    }
    cout <<endl;
    // if revers itrator
    vector<int> ::reverse_iterator rit;
    for(rit=vec.rbegin(); rit != vec.rend(); rit++){
        cout<<*(it)<<" ";
    }
    cout <<endl;


    }

};
int main(){
    vecter obj;
    // obj.vecter2();
    obj.show();
    
  return 0;
}