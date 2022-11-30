#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int n, t;
     string s, a;
     cin >> n >> t;
     cin >> s;

     a = s;
     for (int i = 0; i < t; i++) {
          for (int i = 0; i < s.size(); i++) {
               if (s[i] == 'B' && s[i+1] == 'G') {
                    a[i] = 'G';
                    a[i+1] = 'B';
               }
          }
          s = a;
     }

     cout << a << endl;
     return 0;
}