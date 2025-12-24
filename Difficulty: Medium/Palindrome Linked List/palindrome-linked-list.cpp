/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:

    bool isPalindrome(Node *head) {
        //  code here
        Node *slow=head, *fast=head;
        while(fast-> next  && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
    
        Node *back=NULL,*front=NULL,*temp=slow->next;
        while(temp){
            front=temp->next;
            temp->next=back;
            back=temp;
            temp=front;
        }
        Node *start=head;
        while(back && start && back!=start){
            if(back->data!=start->data)return 0;
            back=back->next;
            start=start->next;
        }
        return 1;
   
        
       
        
        
        
        
    }
};