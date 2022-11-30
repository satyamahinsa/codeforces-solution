#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);
     
     int t;
     cin >> t;

     while (t--) {
          long long int a, b;
          cin >> a >> b;

          if (a % b == 0) {
               cout << 0 << endl;
          } else {
               cout << b - (a % b) << endl;
          }
     }

     return 0;
}