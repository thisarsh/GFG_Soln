/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node *temp=head,*zero=head,*one=head,*two=head;
        while(temp && zero){
            if(temp->data==0){
                swap(temp->data,zero->data);
                zero=zero->next;
            }
            temp=temp->next;
        }
        one=temp=zero;
            while(temp && one){
            if(temp->data==1){
                swap(temp->data,one->data);
                one=one->next;
            }
            temp=temp->next;
        }
        two=temp=one;
            while(temp && two){
            if(temp->data==2){
                swap(temp->data,two->data);
                two=two->next;
            }
            temp=temp->next;
        }
       
       return head;
        
    }
};