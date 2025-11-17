class Solution {
  public:
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
  
    Node* addOne(Node* head) {
        // reverse
        head = reverseList(head);

        Node* temp = head;
        int carry = 1;

        while(temp){
            int curr = temp->data + carry;
            temp->data = curr % 10;
            carry = curr / 10;

            if(!carry) break;
            if(temp->next == NULL) break;

            temp = temp->next;
        }

        if(carry){
            temp->next = new Node(carry);
        }

        // reverse back
        return reverseList(head);
    }
};
