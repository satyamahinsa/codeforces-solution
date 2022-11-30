#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int n;
     cin >> n;

     int p[101], ans[101];
     for (int i = 1; i <= n; i++) {
          cin >> p[i];
          ans[p[i]] = i;
     }

     for (int i = 1; i <= n; i++) {
          cout << ans[i] << " ";
     }
     return 0;
}