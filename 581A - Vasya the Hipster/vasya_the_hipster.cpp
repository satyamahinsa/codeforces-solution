#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int a, b;
  cin >> a >> b;

  if(a >= b) {
    a -= b;
    a /= 2;
    cout << b << " " << a << endl;
  } else {
    b -= a;
    b /= 2;
    cout << a << " " << b << endl;
  }

  return 0;
} 