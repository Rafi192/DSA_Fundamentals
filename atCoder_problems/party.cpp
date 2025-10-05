#include <bits/stdc++.h>
using namespace std;

int main() {
  int A;
  cin >> A;
  // number of rows we have to find the number of rows needed to fit 400 people
  // in A rows B
  int left = 1, right = 400, result = -1;

  while (left <= right) {
    int mid = (left + right) / 2;
    int total = A * mid;

    if (total == 400) {
      result = mid;
      break;
    } else if (total < 400) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  if (result != -1)
    cout << result << "\n";
  else
    cout << -1;

  return 0;
}