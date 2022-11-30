#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int n, groups = 0;
     cin >> n;

     int magnet[100001];
     for (int i = 1; i <= n; i++) {
          cin >> magnet[i];
     }

     for (int i = 1; i <= n; i++) {
          if ((magnet[i] == 10 && magnet[i+1] == 01) || (magnet[i] == 01 && magnet[i+1] == 10)) {
               groups++;
          }
     }

     cout << groups + 1 << endl;
     return 0;
}