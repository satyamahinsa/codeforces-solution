#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int x, ans = 0;
     cin >> x;

     ans = x / 5;
     if (x % 5 == 0) {
          cout << ans << endl;
     } else {
          cout << ans + 1 << endl;
     }

     return 0;
}