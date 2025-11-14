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
    int lengthOfLoop(Node *head) {
        // code here
        if(head==NULL || head->next==NULL)return 0;
        Node *fast=head;
        Node *slow=head;
        bool isloop=0;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                isloop=1;
                break;
            }
        }
        if(isloop==0)return 0;
        int count=1;
        fast=fast->next;
        while(slow!=fast){
            fast=fast->next;
            count++;
        }
        return count;
        
      
        
        
    }
};