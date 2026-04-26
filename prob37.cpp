#include <iostream>
#include <cstring>
using namespace std;

struct Node {
    char data;
    Node* next;
};

Node* top = NULL;

void push(char x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = top;
    top = temp;
}

char pop() {
    if (top == NULL) return '\0';
    char val = top->data;
    Node* temp = top;
    top = top->next;
    delete temp;
    return val;
}

int main() {
    char str[] = "madam";
    int len = strlen(str);

    for (int i = 0; i < len; i++)
        push(str[i]);

    bool palindrome = true;

    for (int i = 0; i < len; i++) {
        if (str[i] != pop()) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";
}



