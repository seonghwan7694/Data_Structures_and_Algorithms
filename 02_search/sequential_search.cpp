#include <bits/stdc++.h>
using namespace std;

#define INF 100 + 1

int sequential_search(int arr_element[], int size, int data){ // 순차 탐색 구현
  for(int i = 0; i < size; i++){
    if(arr_element[i] == data) return i;
  }
  return -1;
}
int main(){
  // fast I/O
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  // input data
  int arr_size = 1e2;
  int arr_element[arr_size];
  srand(time(NULL));
  for(int i = 0; i < arr_size; i++){
    arr_element[i] = rand()%INF; 
  }

  int data; cin >> data; // 찾으려는 데이터
  int res = sequential_search(arr_element, arr_size, data); // 순차탐색 결괴
  if(res == -1){
    cout << "찾고자하는 데이터가 arr_element 배열에 존재하지 않습니다.";
  }else{
    cout << "찾고자하는 데이터 \"" << data << "\"의 위치는 \"";
    cout << res << "\"입니다.";
  }
  return 0;
}