#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     float sum = 0;
     int n;
     cin >> n;
     
     int p[101];
     for (int i = 0; i < n; i++) {
          cin >> p[i];
          sum += p[i];
     }

     cout << sum / n << endl;
     return 0;
}