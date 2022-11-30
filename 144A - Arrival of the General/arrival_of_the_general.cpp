#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int n;
     cin >> n;
     int a[n], max = 0, min = 101, max_index, min_index;

     for (int i = 0; i < n; i++) {
          cin >> a[i];

          if (a[i] > max) {
               max = a[i];
               max_index = i;
          }

          if (a[i] <= min) {
               min = a[i];
               min_index = i;
          }
     }

     if (max_index > min_index) {
          min_index++;
     }

     cout << max_index + (n - 1) - min_index << endl;
     return 0;
}