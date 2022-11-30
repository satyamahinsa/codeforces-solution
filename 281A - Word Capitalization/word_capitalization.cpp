#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     string s, ans;
     cin >> s;

     if (s[0] > 96) {
          s[0] -= 32;
          ans = s;
     } else {
          ans = s;
     }

     cout << ans << endl;
     return 0;
}