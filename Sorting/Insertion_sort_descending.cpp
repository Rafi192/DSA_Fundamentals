// insertion sort algorithm (Descending order))
#include <iostream>

using namespace std;

void insertion_srt(int arr[], int size){
  for( int i=1; i<size; i++){
    int current = arr[i];
    int j = i-1;

    while( j>=0  && arr[j] <current){
      arr[j+1] = arr[j];
      j--;
    }
    arr [j+1] = current;
  }

  for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }

}

int main(){
  int arr[] = {5, 1, 4, 2, 7, 3, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  insertion_srt(arr, size);

  return 0;
}