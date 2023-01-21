#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n, sum, c1, c2;
    cin >> n;

    c1 = n / 3;
    c2 = n / 3;
    sum = c1 + (2 * c2);

    if(sum < n) {
      if(n - sum == 1) {
        c1++;
      } else if(n - sum == 2) {
        c2++;
      }
    } else if(sum > n) {
      c2--;
    }

    cout << c1 << " " << c2 << endl;
  }

  return 0;
} 