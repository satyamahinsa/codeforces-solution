#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int n, ans = 0;
     cin >> n;
     int solution[4];

     for (int i = 1; i <= n; i++) {
          int temp = 0;
          for (int j = 1; j <= 3; j++) {
               cin >> solution[j];
               if (solution[j] == 1) {
                    temp++;
               }
          }
          if (temp > 1) {
               ans++;
          }
     }

     cout << ans << endl;
     return 0;

}