#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
struct node *temp;
void enq (int I){
    
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=I;
    new_node->next=0;
    if (front==0 && rear == 0){
        front=rear=new_node;
        
    }
    else{
        rear->next=new_node;
        rear=new_node;
        
    }
}
void deq(){
    struct node * temp;
    temp=front;
    if(front==0 && rear==0){
        cout << "Queue is empty";
    }
    else{
        cout<<"dequed element is "<<temp->data<<endl;
        front=front->next;
        free(temp);
    }
}
void display(){
    
    temp=front;
    while (temp!=0){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}

int main(){
    
    
    while(true){
        cout<<"Enter the function : - "<<endl<<"1) Enque\n"<<"2) Deque\n"<<"3) Display\n"<<"4) Exit\n"<<":- ";
        int fu;
        cin>>fu;
        if (fu==1){
            int en;
            cout<<": - ";
            cin>>en;
            enq(en);
        }
        else if(fu==2){
            deq();
        }
        else if (fu==3){
            display();
        }
        else if (fu==4){
            break;
        }
        else{
            cout<<"Invalid input, try again...";
        }
    }
}