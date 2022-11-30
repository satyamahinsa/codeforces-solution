#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int s[4], ans = 0;
     
     for (int i = 0; i < 4; i++) {
          cin >> s[i];
     }

     sort(s, s + 4);
     for (int i = 0; i < 3; i++) {
          if (s[i] == s[i + 1]) { 
               ans++;
          }
     }

     cout << ans << endl;
     return 0;
}