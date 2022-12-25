/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         if(head==NULL or !head->next ){      //                                                                                                                                                                                                                                                                                                                                                                                                         which is the new head in { ListNode* value = reverseList("head"-> next)} called recursively. 
            return head;
                          
        }
            
        ListNode* value = reverseList(head->next);
        head->next->next=head;
        head->next=NULL;   //1) Every time current node becomes NULL it affects the if statement to return head reversly (now read up)//
        return value;

        }
};