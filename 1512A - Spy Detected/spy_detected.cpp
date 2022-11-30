#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    if(n >= 3) {
      int a[n];
      for(int i = 1; i <= n; i++) {
        cin >> a[i];
      }

      bool found = false;
      for(int i = 2; i < n; i++) {
        if(a[i] != a[i + 1] && a[i] != a[i - 1]) {
          cout << i << endl;
          found = true;
        }
      }

      if(!found) {
        if(a[1] != a[2]) {
          cout << 1 << endl;
        } else {
          cout << n << endl;
        }
      }
    }
  }

  return 0;
} 