#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    int candies[n];
    for(int i = 0; i < n; i++) {
      cin >> candies[i];
    }
    sort(candies, candies + n);
    int min = candies[0], total = 0;
    
    for(int i = 0; i < n; i++) {
      candies[i] -= min;
      total += candies[i];
    }

    cout << total << endl;
  }

  return 0;
} 