#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int k, n, w, total = 0, ans = 0;
     cin >> k >> n >> w;

     for (int i = 1; i <= w; i++) {
          total += k*i;
     }

     ans = total - n;
     if (ans > 0) {
          cout << ans << endl;
     } else {
          cout << 0 << endl;
     }

     return 0;
}