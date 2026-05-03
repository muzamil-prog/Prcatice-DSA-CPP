#include <iostream>
#include <stack>
using namespace std;
class postfix{
    public:
    int prec(char op){
        if(op =='-' || op == '+'){
            return 1;
        }
        if(op=='*' || op=='/'){
            return 2;
        }
        return 0;
    }
    string topostfix(string s){
        stack<char> st;
        string str="";
        for(char ch: s){
            if(isdigit(ch)){
                str+=ch;
            }
           else if(ch=='('){
                st.push(ch);
            }else if(ch==')'){
                while(ch !='('){
                    str+=st.top();
                    st.pop();
                }
                st.pop();
            }else // operator
            while(st.empty() && prec(st.top()) >= prec(ch)){
                str+=st.top();
                st.pop();
            }

            st.push(ch);

        }
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        return str;

        
    }
    // postfix evalutate 
        int eval(string s){
            stack<int> st;
            for(char ch: s){
                if(isdigit(ch)){
                    st.push(ch - '0');
                }else{
                    int b= st.top();  st.pop();
                    int a= st.top();  st.pop();
                    if(ch=='-'){
                        st.push(a-b);
                    }
                    if(ch=='+'){
                        st.push(a+b);
                    }
                    if(ch=='*'){
                        st.push(a*b);
                    }
                    if(ch=='/'){
                        st.push(a/b);
                    }
                }
            }
            return st.top();
        }
        
    
};
int main(){
    postfix obj;
    string infix;
    cout<<"enter the infix:"<<endl;
    cin>>infix;
    string post=obj.topostfix(infix);
    cout <<"postfix:"<<post<<endl;
    int result=obj.eval(post);
    cout <<"result:"<<result<<endl;
    return 0;

}