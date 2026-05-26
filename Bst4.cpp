#include <iostream>
using namespace std;
class Node {
    public:
    Node *left;
    Node* right;
   int data; 
    Node(int data){
        this->data=data;
        left=right=NULL;
    }

};
Node *insert(Node *root, int val){
    if(root==NULL){
        return new Node(val);
    }
    if(root->data>val){
        root->left=insert(root->left, val);

    }else {
        root->right=insert(root->right, val);
    }
    return root;
}
void inorder(Node *root){
    if(root=NULL){
        return;
    }
     inorder(root->left);
     cout <<root->data<<"->";
     inorder(root->right);
}
Node *small(Node *root){
    Node *current;
    current=root;
    small(current->left);
    if(current !=NULL){
        return current;
    }
    
    
}
Node *max(Node *root){
    Node *current;
    current=root;
    max(current->right);
    if(current != NULL){
        return current;
    }
}
int main(){
    int arr[5]={3,2,5,6,9};
    Node *root=NULL;
    int element=1;
    insert(root, element);
    for(int i=0; i<5; i++){
     root =insert(root, arr[i]);
    }
    inorder(root);
    Node *result=small(root);
    cout <<"the small element in Bst tree is :"<<result->data<<endl;
    Node *maximum=max(root);
    cout <<"the maximum element in tree is :"<<maximum->data<<endl;
    
    return 0;

}