const int MAX_SIZE = 100;

struct Node{
  int data;
  Node* next;
  }
  
clase Queue{
  private : 
    Node* front;
    Node* rear;
    int arr[MAX_SIZE];
  public : 
     int size;
     Queue() : front(Nullptr), rear(Nullptr), size(0) {}
     ~Queue();
     bool isEmpty();
     void addQueue(int data);
     void deleteQueue();
     void peekQueue();
}
