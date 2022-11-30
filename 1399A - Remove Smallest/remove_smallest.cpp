#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t, n;
  cin >> t;

  while(t--) {
    cin >> n;
    int a[n], diff = 0;

    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }

    if(n == 1) {
      cout << "YES" << endl;
    } else {
      sort(a, a + n);
      
      vector<int> new_a;
      for(int i = 1; i < n; i++) {
        diff = a[i] - a[i - 1];
        new_a.push_back(diff);
      }
      
      sort(new_a.begin(), new_a.end(), greater<int>());

      if(new_a[0] > 1) {
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
      }
    }
  }

  return 0;
} 