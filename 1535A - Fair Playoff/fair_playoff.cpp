#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int s[4], max1, max2;
    cin >> s[0] >> s[1] >> s[2] >> s[3];

    max1 = max(s[0], s[1]);
    max2 = max(s[2], s[3]);

    if (max1 > max2) {
      swap(max1, max2);
    }

    sort(s, s + 4);
    if(max1 == s[2] && max2 == s[3]) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
} 