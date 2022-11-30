#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int n, a = 0, d = 0;
     cin >> n;
     string s;
     cin >> s;
     
     for (int i = 0; i < n; i++) {
          if (s[i] == 'A') {
               a++;
          } else if (s[i] == 'D') {
               d++;
          }
     }

     if (a > d) {
          cout << "Anton" << endl;
     } else  if (a < d) {
          cout << "Danik" << endl;
     } else {
          cout << "Friendship" << endl;
     }
     return 0;
}