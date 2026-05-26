#include <iostream>
using namespace std;
class Node{
    public:
    Node* left;
    Node *right;
    int data;
    Node(int data){
        this->data=data;
        left=right=NULL;

    }

};
Node * insert(Node *root, int val){
    if(root==NULL){
        root new Node(val);
    }
    if(root->data> val){
        root->left=insert(root->left, val);
        
    }else{
        root->right=insert(root->right, val);
    }
    return root;
}
void inorder(Node *root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout <<root->data<<"->"<<endl;
    inorder(root->right);
}
int main(){
    int arr[5]={5,3,2,9,3};
    Node *root;
    for(int i=0; i<5; i++){
        root=insert(root, arr[i]);
    }
    inorder(root);
    return 0;
}