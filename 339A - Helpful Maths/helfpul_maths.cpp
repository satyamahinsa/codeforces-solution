#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     string s, ans;
     cin >> s;

     for (int i = 0; i < s.size(); i++) {
          if (s[i] != '+') {
               ans.push_back(s[i]);
          }
     }

     sort(ans.begin(), ans.end());
     cout << ans[0];

     for (int i = 1; i < ans.size(); i++) {
          cout << '+' << ans[i];
     }

     return 0;
}