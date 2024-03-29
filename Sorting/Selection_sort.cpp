#include <iostream>

using namespace std;

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
}

void Selection_sort(int arr[], int size) {
  int min_index;
  for (int i = 0; i < size - 1; i++) {
    min_index = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[min_index]) {
        min_index = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }
  print_array(arr, size);
}

int main() {
  int arr[] = {5, 1, 4, 2, 7, 3, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  Selection_sort(arr, size);

  return 0;
}
