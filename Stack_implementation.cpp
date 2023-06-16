#include <stack>
#include <iostream>
using namespace std;

class Stack_implementation{
    public:
        int top=-1;
        int stack_arr[10];
        int maxsize = sizeof(stack_arr)/sizeof(stack_arr[0]);
        bool  is_empty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }

        bool is_full(){
            if(top==maxsize-1){
                return true;
            }
            else{
                return false;
            }
        }

        void push(int element){
            if(is_full()){
                cout<<"cannot push element"<<endl;
            }
            else{
                top++;
                stack_arr[top]=element;
                cout<<"pushed "<<stack_arr[top]<<endl;
                
            }
        }
        void pop(){
            if(is_empty()){
                cout<<"cannot pop, stack is empty"<<endl;
            }
            else{
                cout<<"popped "<<stack_arr[top]<<endl;
                top--;
            }
        }

        void peek(){
            if(is_empty()){
                cout<<"cannot peek, stack is empty"<<endl;
            }
            else{
                cout<<"top element : "<<stack_arr[top]<<endl;
            }
        }
        void display(){
            if(is_empty()){
                cout<<"Cannot display, stack is empty"<<endl;
            }
            else{
                cout<<"Stack elements are :";
                for(int i=top;i>=0;i--){
                    
                    cout<<stack_arr[i]<<" ";
                }
                cout<<" \n ";
            }
        }
};

int main(){
    Stack_implementation obj ;
    // cout<<"1) push \n 2) pop \n 3) peek \n 4) display \n 5) quit"<<endl;
    int opt;
    int p_val;
    bool end=false;
    while(true){
        if(end){
            cout<< "program terminated !";
            break;
        }
        cout<<"1) push \n2) pop \n3) peek \n4) display \n5) quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>opt;
        switch(opt){
            case 1:
                cout<<"Enter value to push : ";
                cin>>p_val;
                obj.push(p_val);
                break;
            case 2:
                obj.pop();
                break;
            case 3:
                obj.peek();
                break;
            case 4:
                obj.display();
                break;
            case 5:
                end=true;
                break;
        }
    }
}