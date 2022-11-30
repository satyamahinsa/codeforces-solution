#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int a, b;
    cin >> a >> b;

    if(a < b) {
      int temp = a;
      a = b;
      b = temp;
    }

    if((a - b) % 10 == 0) {
      cout << (a - b) / 10 << endl;
    } else {
      cout << ((a - b) / 10) + 1 << endl;
    }
  }

  return 0;
} 