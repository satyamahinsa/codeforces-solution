#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n;
  cin >> n;

  int k = n / 2;
  if(n % 2 == 1) {
    cout << k << endl;
    k--;
    cout << 3 << " ";
  } else {
    cout << k << endl;
  }

  for(int i = 0; i < k; i++) {
    cout << 2 << " ";
  }

  return 0;
} 