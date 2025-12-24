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
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node *h1=head1,*h2=head2,*dummy=new Node(-1);
        Node *dummyhead=dummy;
        while(h1 && h2){
             if(h1->data> h2->data){
                 Node *n=new Node (h2->data);
                 dummy->next=n;
                 h2=h2->next;
             }
             else {
                 Node *n=new Node (h1->data);
                 dummy->next=n;
                 h1=h1->next;
                 
             }
             dummy=dummy->next;
         }
         while(h1){
                Node *n=new Node (h1->data);
                 dummy->next=n;
                 h1=h1->next;
                 dummy=dummy->next;
         }
         
         while(h2){
                Node *n=new Node (h2->data);
                 dummy->next=n;
                 h2=h2->next;
                 
                 dummy=dummy->next;
         }
            
          return dummyhead->next;  
        }
    
};