#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    
    int odd = 0, even = 0, same = 0;
    for(int i = 0; i < n; i++) {
      if(i % 2 == 0) {
        if(a[i] % 2 == 0) {
          same++;
        } else {
          odd++;
        }
      } else {
        if(a[i] % 2 == 1) {
          same++;
        } else {
          even++;
        }
      }
    }

    if(even == odd) {
      cout << even << endl;
    } else if(same == n) {
      cout << 0 << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
} 