#include <iostream>
#include <stack>
using namespace std;

int prec(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Infix → Postfix
string toPostfix(string s) {
    stack<char> st;
    string res = "";

    for (char ch : s) {
        if (isdigit(ch)) res += ch;

        else if (ch == '(') st.push(ch);

        else if (ch == ')') {
            while (st.top() != '(') {
                res += st.top(); st.pop();
            }
            st.pop();
        }

        else { // operator
            while (!st.empty() && prec(st.top()) >= prec(ch)) {
                res += st.top(); st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty()) {
        res += st.top(); st.pop();
    }

    return res;
}

// Evaluate Postfix
int eval(string s) {
    stack<int> st;

    for (char ch : s) {
        if (isdigit(ch)) st.push(ch - '0');

        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            if (ch == '+') st.push(a + b);
            if (ch == '-') st.push(a - b);
            if (ch == '*') st.push(a * b);
            if (ch == '/') st.push(a / b);
        }
    }
    return st.top();
}

int main() {
    string infix;
    cin >> infix;

    string post = toPostfix(infix);
    cout << "Postfix: " << post << endl;
    cout << "Result: " << eval(post);
}