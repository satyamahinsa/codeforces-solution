#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n;
  cin >> n;

  int welfare[n];
  for(int i = 0; i < n; i++) {
    cin >> welfare[i];
  }

  int min_charge = 0;
  if(n == 1) {
    cout << min_charge << endl;
  } else {
    sort(welfare, welfare + n);

    for(int i = 0; i < n - 1; i++) {
      min_charge += welfare[n-1] - welfare[i]; 
    }
    cout << min_charge << endl;
  }

  return 0;
} 