#include <iostream>

#define MAX_SIZE 1e2

template<class T> class Stack{
  public:
    int top;
    int size;
    T *values;

    Stack(){
      size = MAX_SIZE;
      values = new T[size];
      int top = 0;
    }

    ~Stack(){
      delete[] values;
    }

    void push(T value){
      if(!is_full()){
        values[top] = value;
        top = (top + 1)%size;
      }else{
        std::cout << "Stack is Full" << "\n";
      }
    }
    
    void pop(){
      if(!empty()){
        top = top - 1;
      }else{
        std::cout << "Stack is Empty" << "\n";
      }
    }
    bool empty(){
      if(top == 0) return true;
      return false;
    }
    bool is_full(){
      if((top + 1)%size == MAX_SIZE) return true;
      return false;
    }
};

template<typename T>
std::ostream& operator <<(std::ostream &out, Stack<T> &s){
  T *temp = s.values;
  out << "top [ ";
  for(int i = 1; i < s.top; i++){
    out << temp[i];
    if(i < s.top - 1) out << " | ";
  }
  out << " ] bottom" << "\n";
  return out;
}

int main(){
  Stack<int> s;
  s.push(1);
  std::cout << s;
  s.push(2);
  std::cout << s;
  s.push(3);
  std::cout << s;
  s.push(4);
  std::cout << s;
  s.push(5);
  std::cout << s;
  s.push(6);
  std::cout << s;
  s.pop();
  std::cout << s;
  s.pop();
  std::cout << s;
  s.pop();
  std::cout << s;
  s.pop();
  std::cout << s;
  s.push(7);
  std::cout << s;
  s.push(8);
  std::cout << s;
  s.push(9);
  std::cout << s;
  s.pop();
  std::cout << s;
  s.pop();
  std::cout << s;
  s.push(10);
  std::cout << s;
  return 0;
}