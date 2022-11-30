#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int ans;
     string a, b;
     cin >> a >> b;

     for (int i = 0; i < a.size(); i++) {
          if (a[i] < 91) {
               a[i] += 32;
          }
          if (b[i] < 91) {
               b[i] += 32;
          }
     }

     if (a < b) {
          ans = -1;
     }

     if (a > b) {
          ans = 1;
     }

     if (a == b) {
          ans = 0;
     }

     cout << ans << endl;
     return 0;
}