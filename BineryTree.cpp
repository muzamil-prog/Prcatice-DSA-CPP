#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
    Node * left;
    Node* right;
    int data;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
class BineryTree{
    public:
   int indx=-1;
    Node* preeorder(vector<int> data){
    indx++;
    if(data[indx]==-1){
        return NULL;

    }
    Node* root=new Node(data[indx]);
    root->left=preeorder(data);// for left nodes
    root->right=preeorder(data); // for right nodes
    return root; // make conection whtih nodes
    
    cout <<root->data<<endl;
    cout <<root->left->data<<endl;
    cout <<root->right->data<<endl;
    }
};
int main(){
    vector<int> data={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    BineryTree obj;
    obj.preeorder(data);
    return 0;
}