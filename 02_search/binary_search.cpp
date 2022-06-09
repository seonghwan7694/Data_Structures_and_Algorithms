#include <bits/stdc++.h>

#define INF 100 + 1

int binary_search(int *arr_element, int left, int right, int target){
  if(left > right) return -1;
  
  int mid = (left + right)/2;
  if(arr_element[mid] == target) return mid;
  else if(arr_element[mid] > target) return binary_search(arr_element, left, mid - 1, target);
  else if(arr_element[mid] < target) return binary_search(arr_element, mid + 1, right, target);
}

int main(){
  // fast I/O
  std::ios::sync_with_stdio(false);
  std::cin.tie(0); std::cout.tie(0);

  // input data
  int arr_size = 1e2;
  int arr_element[arr_size];
  std::srand(time(NULL));
  for(int i = 0; i < arr_size; i++){
    arr_element[i] = rand()%INF; 
  }
  std::sort(arr_element, arr_element + arr_size); // 이분 탐색은 정렬된 배열이 전제조건이다

  int target = rand()%INF; // 찾고자 하는 값
  
  // 재귀.ver
  std::cout << "재귀.ver : ";
  {
    std::cout << binary_search(arr_element, 0, arr_size - 1, target) << "\n";
  }

  
  // 반복문.ver
  
  std::cout << "반복문.ver : ";
  {
    int left = 0;
    int right = arr_size - 1;
    int mid;
    while(left <= right){
      mid = (left + right)/2;

      if(arr_element[mid] == target){
        std::cout << mid << "\n";
        break;
      }else if(arr_element[mid] > target){ // 1 2 3 [4] 5 6 7 이고 찾는 값이 2라면.. 생각을 해봅시다. 
        right = mid - 1;
      }else if(arr_element[mid] < target){
        left = mid + 1;
      }
    }
    std::cout << -1 << "\n";
  }
  return 0;
}