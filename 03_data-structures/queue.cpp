#include <iostream>

#define MAX_SIZE 1e2

template<class T> class Queue{
  public:
    int front;
    int rear;
    int size;
    T *values;
    
    Queue(){
      size = MAX_SIZE;
      values = new T[size];
      front = 0;
      rear = 0;
    }

    ~Queue(){
      delete[] values;
    }

    void push(T value){
      if(!isFull()){
        values[rear] = value;
        rear = (rear + 1) % size;
      }else{
        std::cout << "Queue is Full" << "\n";
      }
    }

    void pop(){
      if(!empty()){
        front = (front + 1) % size;
      }else{
        std::cout << "Queue is Empty" << "\n";
      }
    }

    bool empty(){
      if(rear == front){
        return true;
      }else{
        return false;
      }
    }

    bool is_full(){
      if((rear + 1) % size == front){
        return true;
      }else{
        return false;
      }
    }
};

template<typename T>
std::ostream& operator <<(std::ostream &out, Queue<T> &q){
  T *temp = q.values;
  out << "front [ ";
  for(int  i = q.front; i < q.rear; i++){
    out << temp[i];
    if(i < q.rear - 1) out << " | ";
  }
  out << " ] rear" << "\n";
  return out;
}

int main(){
  Queue<int> q;
  q.push(3);
  std::cout << q;
  q.push(-101);
  std::cout << q;
  q.push(6);
  std::cout << q;
  q.push(10);
  std::cout << q;
  q.push(0);
  std::cout << q;
  q.push(52);
  std::cout << q;
}