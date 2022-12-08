#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n, k;
    cin >> n >> k;

    int a[n], b[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
      cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    int begin = 0, last = n - 1;
    for(int i = 0; i < k; i++) {
      if(a[begin] < b[last]) {
        int temp = b[last];
        b[last] = a[begin];
        a[begin] = temp;
        begin++;
        last--;
      }
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
      sum += a[i];
    }

    cout << sum << endl;
  }

  return 0;
} 