#include <bits/stdc++.h>
using namespace std;

#define INF 100 + 1

void SWAP(int &a, int &b){
  int tmp = a;
  a = b;
  b = tmp;
}

int main(){
  // fast I/O
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  // input data
  int arr_size = 1e2, min_idx;
  int arr_element[arr_size];
  srand(time(NULL));
  for(int i = 0; i < arr_size; i++){
    arr_element[i] = rand()%INF; 
  }

  // selection_sort
  for(int i = 0; i < arr_size - 1; i++){ // 마지막 숫자는 자동으로 정렬되기 때문에 (숫자 개수 - 1)만큼 반복한다.
    min_idx = i; // 최솟값의 인덱스를 현재의 인덱스(i)로 초기화해준다.
    for(int j = i + 1; j < arr_size; j++){
      if(arr_element[min_idx] > arr_element[j]) min_idx = j; // 최솟값의 인덱스를 찾는다.
    }
    if(min_idx != i){ // 현재의 인덱스(i)가 최솟값의 인덱스가 아니라면, 
      SWAP(arr_element[i], arr_element[min_idx]); // 바꿔준다.
    }
  } 

  // result
  for(int i = 0; i < arr_size; i++){
    cout << arr_element[i] << "\n";
  }


  return 0;
}