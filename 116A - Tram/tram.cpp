#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int n, a[1001], b[1001], temp[1001], ans = 0;
     cin >> n;

     for (int i = 0; i < n; i++) {
          cin >> a[i] >> b[i];
          temp[i] = a[i] + b[i];
     }
     
     for (int i = 0; i < n; i++) {
          temp[i+1] = temp[i] - a[i+1] + b[i+1];
     }

     for (int i = 0; i < n; i++) {
          if (temp[i] > ans) {
               ans = temp[i];
          }
     }

     cout << ans << endl;
     return 0;
}