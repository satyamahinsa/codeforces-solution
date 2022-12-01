#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  long long t;
  cin >> t;

  while(t--) {
    long long x, y, n, k = 0;
    cin >> x >> y >> n;

    k = x * (n / x) + y;

    if(k > n) {
      cout << k - x << endl;
    } else {
      cout << k << endl;
    }
  }

  return 0;
} 