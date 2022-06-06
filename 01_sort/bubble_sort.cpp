#include<bits/stdc++.h>
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
  int arr_size = 1e2;
  int arr_element[arr_size];
  srand(time(NULL));
  for(int i = 0; i < arr_size; i++){
    arr_element[i] = rand()%INF; 
  }

  // bubble_sort
  for(int i = 0; i < arr_size; i++){
    for(int j = 0; j < arr_size; j++){
      if(arr_element[i] < arr_element[j]){
        SWAP(arr_element[i], arr_element[j]);
      }
    }
  }
  
  // result
  for(int i = 0; i < arr_size; i++){
    cout << arr_element[i] << "\n";
  }

}