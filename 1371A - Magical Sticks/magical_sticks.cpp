#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    long long n, sticks = 0;
    cin >> n;

    sticks = n / 2;
    if(n % 2 == 1) {
      sticks++;
    }

    cout << sticks << endl;
  }

  return 0;
} 