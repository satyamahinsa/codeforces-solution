#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int upper = 0, lower = 0;
     string s, ans;
     cin >> s;

     for (int i = 0; i < s.size(); i++) {
          if (s[i] >= 65 && s[i] <= 90) {
               upper++;
          }
          if (s[i] >= 97 && s[i] <= 122) {
               lower++;
          }
     }

     for (int i = 0; i < s.size(); i++) {
          if (upper > lower) {
               if (s[i] >= 97 && s[i] <= 122) {
                    s[i] -= 32;
               }
          } else if (upper <= lower) {
               if (s[i] >= 65 && s[i] <= 90) {
                    s[i] += 32;
               }
          }
     }

     cout << s << endl;

     return 0;
}