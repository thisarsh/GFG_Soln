/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  Node * rev (Node *head){
      Node *back=NULL,*front=NULL,*temp=head;
      while(temp){
        front=temp->next;
        temp->next=back;
        back=temp;
        temp=front;
      }
      return back;
  }
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        while(head1 && head1->data==0){
            head1=head1->next;
            
        }
        while(head2 && head2->data==0){
            head2=head2->next;
            
        }

        Node *h1=rev(head1),*h2=rev(head2),*dummy=new Node (-1);
        Node *dummyhead=dummy;
        int carry=0;
        
        while(h1 || h2 || carry ){
            int sum=carry;
            if(h1) {sum+=h1->data; h1=h1->next;}
            if(h2) {sum+=h2->data; h2=h2->next;}
            
           carry=sum/10;
            Node  *n=new Node(sum%10);
            dummy->next=n;
            dummy=dummy->next;
          
        }
        
        return rev(dummyhead->next);
    }
};