#include <iostream>
#include <Queue.h>

using namespace std;

Queue::~Queue() {
}

bool Queue::isEmpty(){
  return(front ==NULL && rear == NULL);
}

int Queue::deleteQueue(){
  if(isEmpty()){
    cout << "큐가 비어있습니다."<<endl;
    return nullptr;
  }
  else {
    Node* temp = front;
    Queue.data = temp->data;
    front = front->next;
    if(front == nullptr)
      rear = nullptr;
  }
  delete temp;
  size--;
  return data;
}
