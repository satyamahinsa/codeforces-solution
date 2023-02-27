#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n, x, end = 2, floor = 1;
    cin >> n >> x;

    while(end < n) {
      end += x;
      floor++;
    }

    cout << floor << endl;
  }

  return 0;
} 