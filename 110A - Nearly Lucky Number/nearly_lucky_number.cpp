#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int lucky = 0;
     string n;
     cin >> n;

     for (int i = 0; i < n.length(); i++) {
          if (n[i] == '4' || n[i] == '7') {
               lucky++;
          }
     }

     if (lucky == 4 || lucky == 7) {
          cout << "YES" << endl;
     } else {
          cout << "NO" << endl;
     }
     
     return 0;
}