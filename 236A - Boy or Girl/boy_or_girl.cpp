#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);
     
     int ans = 0;
     string s;
     cin >> s;
     sort(s.begin(), s.end());

     for (int i = 0; i < s.size(); i++) {
          if (s[i] != s[i+1]) {
               ans++;
          }
     }

     if (ans % 2 == 0) {
          cout << "CHAT WITH HER!";
     } else {
          cout << "IGNORE HIM!";
     }

     return 0;
}