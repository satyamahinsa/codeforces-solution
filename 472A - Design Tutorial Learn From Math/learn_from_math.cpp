#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n;
  cin >> n;

  if(n % 2 == 0) {
    cout << n - 6 << " 6";
  } else {
    cout << n - 9 << " 9";
  }

  return 0;
} 