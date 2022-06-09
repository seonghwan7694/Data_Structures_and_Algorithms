#include <bits/stdc++.h>
using namespace std;

#define INF 100 + 1

void merge(int *arr_element, int left, int mid, int right){
  int* tmp = new int[right - left + 1];
  int i, j, k;
  i = left;
  j = mid + 1;
  k = 0;

  while(i <= mid and j <= right){
    if(arr_element[i] <= arr_element[j]) tmp[k++] = arr_element[i++];
    else tmp[k++] = arr_element[j++];
  }
  
  if(i > mid) while(j <= right) tmp[k++] = arr_element[j++];
  else while(i <= mid) tmp[k++] = arr_element[i++];

  for(int i = left, k = 0; i <= right; i++, k++) arr_element[i] = tmp[k];
  delete[] tmp;
}

void merge_sort(int *arr_element, int left, int right){
  if(left < right){
    int mid = (left + right)/2;
    merge_sort(arr_element, left, mid);
    merge_sort(arr_element, mid + 1, right);
    merge(arr_element, left, mid, right);
  }
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

  // merge_sort
  merge_sort(arr_element, 0, arr_size - 1);
  // result
  for(int i = 0; i < arr_size; i++){
    cout << arr_element[i] << "\n";
  }
  
  return 0;
}