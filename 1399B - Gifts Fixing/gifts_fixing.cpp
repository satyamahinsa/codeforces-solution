#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    long long n, moves = 0;
    cin >> n;
    
    long long a[n], b[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
      cin >> b[i];
    }

    long long min_a = *min_element(a, a + n);
    long long min_b = *min_element(b, b + n);

    for(int i = 0; i < n; i++) {
      moves += max(a[i] - min_a, b[i] - min_b);
    }

    cout << moves << endl;
  }

  return 0;
} 