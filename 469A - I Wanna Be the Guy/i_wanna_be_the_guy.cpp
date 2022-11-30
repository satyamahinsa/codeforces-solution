#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int n, ans = 0;
     cin >> n;

     int p, q, result[200];
     cin >> p;
     for (int i = 0; i < p; i++) {
          cin >> result[i];
     }

     cin >> q;
     for (int i = p; i < p + q; i++) {
          cin >> result[i];
     }

     sort(result, result + (p + q));
     for (int i = 0; i < p + q; i++) {
          if (result[i] != result[i + 1]) {
               ans++;
          }
     }

     if (ans == n) {
          cout << "I become the guy." << endl;
     } else {
          cout << "Oh, my keyboard!" << endl;
     }

     return 0;
}