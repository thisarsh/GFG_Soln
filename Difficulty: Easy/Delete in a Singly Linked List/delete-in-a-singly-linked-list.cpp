/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *delbeg(Node *head){
        if(!head || !head->next) return NULL;
        head=head->next;
        return head;
    }
    
    Node* deleteNode(Node* head, int x) {
        // code here
        Node * temp= head;
        if(x==1)return delbeg(head);
        for(int i=1; i<x-1; i++){
            temp=temp->next;
        }
        if(temp->next) temp->next=temp->next->next;
        else temp->next=NULL;
        return head;

     
    }
};