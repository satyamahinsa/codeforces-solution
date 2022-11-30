#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     string s, t, temp;
     cin >> s >> t;

     for(int i = s.size() - 1; i >= 0; i--) {
          temp += t[i];
     }

     if (s == temp) {
          cout << "YES" << endl;
     } else {
          cout << "NO" << endl;
     }
     return 0;
}