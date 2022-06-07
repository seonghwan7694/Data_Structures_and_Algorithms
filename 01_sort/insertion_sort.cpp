#include <bits/stdc++.h>
using namespace std;

#define INF 100 + 1

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

  // insertion_sort
  for(int i = 1, j; i < arr_size; i++){
    int key = arr_element[i];
    for(j = i - 1; j >= 0 and arr_element[j] > key; j--){
      arr_element[j+1] = arr_element[j];
    }
    arr_element[j+1] = key;
  }

  // result
  for(int i = 0; i < arr_size; i++){
    cout << arr_element[i] << "\n";
  }


  return 0;
}