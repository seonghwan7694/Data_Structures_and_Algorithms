#include <bits/stdc++.h>
using namespace std;

#define INF 100 + 1

int sequential_search(int arr_element[], int size, int data){ // ���� Ž�� ����
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

  int data; cin >> data; // ã������ ������
  int res = sequential_search(arr_element, arr_size, data); // ����Ž�� �ᱫ
  if(res == -1){
    cout << "ã�����ϴ� �����Ͱ� arr_element �迭�� �������� �ʽ��ϴ�.";
  }else{
    cout << "ã�����ϴ� ������ \"" << data << "\"�� ��ġ�� \"";
    cout << res << "\"�Դϴ�.";
  }
  return 0;
}