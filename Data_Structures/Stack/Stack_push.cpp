#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> arr1;

  stack<int> s;

  s.push(5);
  s.push(10);
  s.push(9);
  s.push(200);
  s.push(1);

  while (s.empty() == false) {
    cout << s.top() << "  ";
    s.pop();
  }
  return 0;
}
