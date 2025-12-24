/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
    Node *fast=head,*slow=head;
    while(k--){
        if(!fast) return -1;
        fast=fast->next;
    }
    while(fast && slow){
        fast=fast->next;
        slow=slow->next;
    }
    return slow->data;
    }
};