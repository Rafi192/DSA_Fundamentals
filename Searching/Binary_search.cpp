#include <iostream>

using namespace std;

int Binary_search(int arr[], int size, int key) {

  int first = 0;
  int last = size - 1;

  do {
    int mid = (first + last) / 2;
    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      first = mid + 1;
    } else if (arr[mid] > key) {
      last = mid - 1;
    }

  } while (first <= last);
  return -1;
}

int main() {

  int arr[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key = 18;
  int index = Binary_search(arr, size, key);
  cout << index;

  return 0;
}
