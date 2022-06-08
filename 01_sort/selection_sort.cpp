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
  for(int i = 0; i < arr_size - 1; i++){ // ������ ���ڴ� �ڵ����� ���ĵǱ� ������ (���� ���� - 1)��ŭ �ݺ��Ѵ�.
    min_idx = i; // �ּڰ��� �ε����� ������ �ε���(i)�� �ʱ�ȭ���ش�.
    for(int j = i + 1; j < arr_size; j++){
      if(arr_element[min_idx] > arr_element[j]) min_idx = j; // �ּڰ��� �ε����� ã�´�.
    }
    if(min_idx != i){ // ������ �ε���(i)�� �ּڰ��� �ε����� �ƴ϶��, 
      SWAP(arr_element[i], arr_element[min_idx]); // �ٲ��ش�.
    }
  } 

  // result
  for(int i = 0; i < arr_size; i++){
    cout << arr_element[i] << "\n";
  }


  return 0;
}