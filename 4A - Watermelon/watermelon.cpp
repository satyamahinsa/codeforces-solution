#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int w;
     cin >> w;

     if (w > 2) {
          if (w % 2 == 0) {
               cout << "YES" << endl;
          } else {
               cout << "NO" << endl;
          }
     } else {
          cout << "NO" << endl;
     }

     return 0;
}