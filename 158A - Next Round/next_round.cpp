#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int n, k, ans = 0;
     cin >> n >> k;
     int a[101];

     for (int i = 1; i <= n; i++) {
          cin >> a[i];
     }

     if (n >= k) {
          for (int i = 1; i <= n; i++) {
               if (a[i] == 0) {
                    continue;
               }
               if (a[i] >= a[k]) {
                    ans++;
               }
          }
     }

     cout << ans << endl;
     return 0;
}