#include <iostream>
using namespace std;
class Node{
    public:
    Node *left;
    Node *right;
    int data;
    Node (int data){
        this->data=data;
        left=right=NULL;
    }
};
Node *findMin(Node *root){
    while(root->left !=NULL){
        root=root->left;
    }
    return root;
}
Node *delteNode(Node *root, int key){
    if(root==NULL){
        return NULL;
    }
    else if(key< root->data){
        root->left=delteNode(root->left, key);
    }
    else if(key> root->data){
        root->right=delteNode(root->right, key);
    }
    else{
        //case 1 leaf node 
        if(root->left==NULL && root->right=NULL){
            delete root;
            return NULL;
        }
        // case 2 if one child node
        else if(root->left==NULL){
            Node *temp=root->left;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node *temp=root->right;
            delete root;
            return temp;
        }
        //case 2 if two child node 
        else{
            Node *temp=findMin(root->right);
            root->data=temp->data;
            root->right=delteNode(root->right, key);

        }
    }
    return root;

}