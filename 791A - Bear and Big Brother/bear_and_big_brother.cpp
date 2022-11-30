#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int a, b, ans = 0;
     cin >> a >> b;

     if (a <= b) {
          do {
               a *= 3;
               b *= 2;
               ans++;
          } while (a <= b);
     }

     cout << ans << endl;
     return 0;
}