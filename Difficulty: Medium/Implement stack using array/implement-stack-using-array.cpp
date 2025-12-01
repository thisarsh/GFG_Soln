class myStack {
         int pivot=-1;
          vector <int> vec;
          int n;
         
  public:
     
    myStack(int size) {
        // Define Data Structures
       vec = vector <int> (size); 
       n=size;

    }

    bool isEmpty() {
        // check if the stack is empty
        if(pivot==-1)return 1;
        return 0;
    }

    bool isFull() {
        // check if the stack is full
        if(pivot==n-1)return 1;
        return 0;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(!isFull()) vec[++pivot]=x;
    }

    void pop() {
        // removes an element from the top of the stack
        if(!isEmpty())pivot--;
    }

    int peek() {
        // Returns the top element of the stack
        if(!isEmpty())return vec[pivot];
        return -1;
    }
};