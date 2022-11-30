#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int m, n, ans = 0;
     cin >> m >> n;
     int temp = m*n;

     while (temp > 1) {
          temp -= 2;
          ans++;
     }

     cout << ans << endl;
     return 0;
}