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
        Node *temp=head;
        Node *zero=new Node (0);
        Node *one=new Node (0);
        Node *two=new Node (0);
        Node *oneh=one;
        Node *zeroh=zero;
        Node *twoh=two;
    
        
        
        
        while(temp){
            if(temp->data==1){
                one->next=temp;
                one=one->next;
                
                
            }
            else if(temp->data==0){
                zero->next=temp;
                zero=zero->next;
               
            }
            else{
                two->next=temp;
                two=two->next;
                
            }
            
            temp=temp->next;
        }
        
        two->next=NULL;
       
        zero->next = (oneh->next) ? oneh->next : twoh->next;
        one->next=twoh->next;
       
        return zeroh->next;
        
        
   
        
    }
};