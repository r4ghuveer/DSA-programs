#include <iostream>
using namespace std;

struct BstNode{
    int data;
    BstNode *left;
    BstNode *right;
};
BstNode *root= NULL,*temp = NULL;
BstNode * GetNewNode (int data){
    BstNode * newnode = new BstNode();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
BstNode *Insert (BstNode *temp, int data){
    if (root==NULL){
        root =GetNewNode(data);
        
    }
    else if (temp==NULL){

        temp = GetNewNode(data);        
    }
    
    else if(data <= temp->data){
        temp->left=Insert(temp->left, data);
    }
    else{
        temp->right=Insert(temp->right, data);
    }
    return temp;
    
}

int height(BstNode *pointer){
    int h;
    if (pointer==NULL){
        return 0;
    }
    int l=height(pointer->left);
    int r=height(pointer->right);
    if (l>r){
        h = 1+l;
    }
    else{
        h = 1+r;
    }
    return h;

}

bool Search(BstNode *temp, int data){
    if (temp==NULL){
        return false;
    
    }
    else if(temp->data==data){
        return true;
    }
    else if (data < temp->data){
        return Search (temp->left,data);
        
    }
    else {
        
        return Search (temp->right, data);
    }
}
int main(){     
    while(true){
        int h;
        cout<<"1) Search\n 2)Height\n 3) Insert \n 4) Quit : - ";
        cin>>h;
        switch (h)
        {
        
        case 1:
            int i;
            cout << "Enter number to search : -";
            cin>>i;
            if (Search (root,i)==true){
                cout<<"number found "<<endl;
            }
            else {
                cout<<"not found"<<endl;
            }
            break;
        
        case 2:
            cout<<"The height of the tree is : - "<<height(root) <<endl;
            break;

        
        case 3:
            int t;            
            cout<<"Enter how many numbers you want to insert : - ";
            cin>>t;
            while(t!=0){
                int I;
                cout<<": -";
                cin>>I;
                Insert(root,I);
                t--;
            }
        case 4:
            exit(1);
            
        }

    }
    
}