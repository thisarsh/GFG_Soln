/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
    struct Node *temp=head;
    struct Node *newnode=new Node; 
    newnode->next=NULL;
    newnode->data=x;
    if(head==NULL){
        return newnode;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
    
    }
};