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

    sort(a, a + n);
    long operations = a[n - 1] - a[0];
    cout << operations << endl;
  }

  return 0;
} 