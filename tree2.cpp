// which perform traversing of the trees
// binery tree which two nodes whiich is left and right no extra nodes only two node are exit is binery tree
#include <iostream>
using namespace std;
class Node{
    public:
    Node *left;
    Node *right;
    int data;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
void preeorder(Node *temp){
    if(temp==NULL){
        return;
    }
    cout <<temp->data<<"->";
    preeorder(temp->left); // for left node   // use recusrion becuse function call its self again and again 
    preeorder(temp->right); // for right nodes
}
void inorder(Node *temp){
    if(temp==NULL){
        return;
    }
    inorder(temp->left);
    cout <<temp->data<<"->";
    inorder(temp->right);

}
void postorder(Node *temp){
    if(temp==NULL){
    return ;
    }
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<"->";
}
int main(){
    Node * root=new Node(1);
    root->left=new Node(2);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right=new Node(3);
    root->right->left=new Node(8);
    root->right->right=new Node(9);
    cout <<"pree order traversing of the tree:"<<endl;
    preeorder(root);
    cout <<"in order traversing of the tree:"<<endl;
    inorder(root);
    cout <<"postorder traversing of the tree:"<<endl;
    postorder(root);
    return 0;

}
