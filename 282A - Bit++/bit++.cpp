#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int n, ans = 0;
     cin >> n;
     string a[151];

     for (int i = 1; i <= n; i++) {
          cin >> a[i];

          if (a[i] == "X++" || a[i] == "++X") {
               ans++;
          } 

          if (a[i] == "X--"|| a[i] == "--X") {
               ans--;
          } 
     }
     
     cout << ans << endl;
     return 0;
}