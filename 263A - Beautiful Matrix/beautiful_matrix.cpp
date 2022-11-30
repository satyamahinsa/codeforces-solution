#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int ans, input;

     for (int row = 1; row <= 5; row++) {
          for (int col = 1; col <= 5; col++) {
               cin >> input;
               if (input == 1) {
                    ans = abs(3 - row) + abs(3 - col);
               }
          }
     }

     cout << ans << endl;
     return 0;
}