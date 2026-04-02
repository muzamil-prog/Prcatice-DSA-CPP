
// letecode 344
// char array revers
// use swap function and two pointer aproach in this programe
 #include <iostream>
 #include <algorithm>
 #include <string>
 using namespace std;
 int main()
 {
     string str="hello world";
     int start=0;
     int end=str.length()-1;
     while(start<=end){
         swap(str[start], str[end]);
         start++;
         end--;
     }
     cout <<str<<endl;
}