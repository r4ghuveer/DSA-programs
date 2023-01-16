#include <iostream>
using namespace std;
struct Node { 
   int data; 
   struct Node *next; 
}; 
struct Node* head = NULL, *temp; 

void insert(int new_data) { 
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
   new_node->data = new_data; 
   new_node->next = 0;
   if(head==0){
      head=temp = new_node; 
   } 
   else{
      temp->next=new_node;
      temp=new_node;
   }
}
struct Node* reverseList(struct Node* head) {
   if(head==NULL or !head->next ){ 
      return head;
                     
   }
   struct Node* value = reverseList(head->next);
   head->next->next=head;
   head->next=NULL;
   return value;
}
int middleNode(struct Node* head) {
        struct Node *slow = head, *fast = head;
        while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;
        return slow->data;
    }
void display(struct Node* ans) { 
   struct Node* ptr;
   ptr = ans;
   while (ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   } 
} 
int main() { 
   insert(1);
   insert(2);
   insert(3);
   insert(4);
   
   // cout<<"The linked list is: ";
   // struct Node* ans;
   int mid;
   // ans=reverseList(head);
   // display(ans);
   mid=middleNode(head);
   cout<<"The middle value is : "<<mid;
  return 0; 
}