/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        struct Node *temp=head;
        while(temp!=NULL){
            if(temp->data==key)return 1;
            temp=temp->next;
        }
        return 0;
    }
};
