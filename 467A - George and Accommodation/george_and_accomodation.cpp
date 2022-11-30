#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int n, ans = 0;
     cin >> n;

     int p[101], q[101];
     for (int i = 0; i < n; i++) {
          cin >> p[i] >> q[i];

          if (p[i] < q[i]) {
               int temp = q[i] - p[i];
               if (temp >= 2) {
                    ans++;
               }
          }
     }

     cout << ans << endl;
     return 0;
}