#include <bits/stdc++.h>
using namespace std;
struct ListNode {
int val;
struct ListNode *next;
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         if(head==NULL or !head->next ){ //  which is the new head in { ListNode* value = reverseList("head"-> next)} called recursively. 
            return head;
                          
        }
            
        ListNode* value = reverseList(head->next);
        head->next->next=head;
        head->next=NULL;   //1) Every time current node becomes NULL it affects the if statement to return head reversly (now read up)//
        return value;

        }
};
int main(){
    ListNode *head;
    ListNode *head1;
    ListNode *head2;
    ListNode *head3;
    ListNode *ans;
    head->val=1;
    head->next=head1;
    head1->val=2;
    head1->next=head2;
    head2->val=3;
    head2->next=head3;
    head3->val=4;
    Solution obj;
    ans=obj.reverseList(head);
    while(ans!=NULL){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
}   