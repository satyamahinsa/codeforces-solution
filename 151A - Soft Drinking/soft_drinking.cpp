#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int max_toasts = (k * l) / nl;
  int max_limes = c * d;
  int max_salts = p / np;

  if(max_toasts < max_limes && max_toasts < max_salts) {
    cout << max_toasts / n << endl;
  } else if(max_limes < max_toasts && max_limes < max_salts) {
    cout << max_limes / n << endl;
  } else {
    cout << max_salts / n << endl;
  }

  

  return 0;
} 