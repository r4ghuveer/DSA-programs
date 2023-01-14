#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data ;
        node *next;

};
void printlist(node* a){
    while(a!=NULL){
        cout<<a->data<<endl;
        a=a->next;
    }
}
int main(){
    int c=0;
    node* head=NULL;
    node* n1=NULL;
    node* n2=NULL;
    node* tail=NULL;
    head= new node ();
    n1= new node();
    n2=new node();
    tail = new node ();

    head ->data =2;
    head -> next =n1;
    n1 -> data =3;
    n1-> next =n2;
    n2->data =4;
    n2->next=tail;
    tail->data=5;
    tail->next=NULL;
    c+=(head->data?head->data:0)+(n2->data?n2->data:0);
    cout<<c;

    
}