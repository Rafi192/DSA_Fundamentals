
#include <algorithm>
#include <iostream>

using namespace std;

void Bubble_Sort(int arr[], int size){
  
  bool swapped;
  do {
    swapped = false;
    for (int i = 0; i < size; i++) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        swapped = true;
      }
    }

  } while (swapped);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  
}

int main() {
  int arr[] = {5, 1, 4, 2, 7, 3, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  Bubble_Sort(arr, size);
  

  /*
  int arr[] = {5, 1, 4, 2, 7, 3, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  bool swapped;
  do {
    swapped = false;
    for (int i = 0; i < size; i++) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        swapped = true;
      }
    }

  } while (swapped);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  */

  return 0;
}