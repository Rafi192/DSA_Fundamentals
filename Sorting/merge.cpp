#include <bits/stdc++.h>
using namespace std;
 
void combine(vector<int>& a, int l, int mid, int r) {
  int n1 = mid - l + 1;
  int n2 = r - mid;
  vector<int> L, R;
  for (int i = l; i <= mid; ++i) L.push_back(a[i]);
  for (int i = mid + 1; i <= r; ++i) R.push_back(a[i]);
  
  int idx1 = 0, idx2 = 0, k = 0;
 
  while (idx1 < n1 && idx2 < n2) {
    if (L[idx1] <= R[idx2]) {
      a[l + k] = L[idx1];
      idx1++;
    } else {
      a[l + k] = R[idx2];
      idx2++;
    }
    k++;
  }
 
  while (idx1 < n1) {
    a[l + k] = L[idx1];
    idx1++;
    k++;
  }
 
  while (idx2 < n2) {
    a[l + k] = R[idx2];
    idx2++;
    k++;
  }
}
 
void mergeSort(vector<int>& a, int l, int r) {
  if (l == r) return;
  int mid = l + (r - l) / 2;
  mergeSort(a, l, mid);
  mergeSort(a, mid + 1, r);
  combine(a, l, mid, r);
}
 
void run() {
  vector<int> a = {5, 2, 9, 1, 5, 6};
  mergeSort(a, 0, a.size() - 1);
  for (int x : a) cout << x << " ";
}
 
int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
 
  int tests = 1;
  while (tests--) run();
 
  return 0;
}