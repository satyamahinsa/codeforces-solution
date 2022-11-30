#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int n, hard = 0;
     cin >> n;

     int opinion[101];
     for (int i = 1; i <= n; i++) {
          cin >> opinion[i];
          if (opinion[i] == 1) {
               hard++;
          }
     }

     if (hard >= 1) {
          cout << "HARD" << endl;
     } else {
          cout << "EASY" << endl;
     }

     return 0;
}