#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int n, h, width = 0;
     cin >> n >> h;

     int a[2001];
     for (int i = 0; i < n; i++) {
          cin >> a[i];
          if (a[i] <= h) {
               width += 1;
          } else if (a[i] > h) {
               width += 2;
          }
     }

     cout << width << endl;
     return 0;
}