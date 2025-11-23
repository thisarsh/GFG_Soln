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
    ListNode *rev(ListNode *temp,ListNode *back,ListNode *front){
       if(!temp)return back;
       front=temp->next;
       temp->next=back;
       back=temp;
       temp=front;
       return rev(temp,back,front);
    }

    ListNode* reverseList(ListNode* head) {
        ListNode *temp=head;
        ListNode *back=NULL;
        ListNode *front=NULL;
        return rev(temp,back,front);

        
    }
};