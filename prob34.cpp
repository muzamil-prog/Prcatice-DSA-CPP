#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop() {
    if (top == NULL) {
        cout << "Stack Underflow\n";
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}

void display() {
    Node* temp = top;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
}