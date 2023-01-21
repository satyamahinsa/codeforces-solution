#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int y, w, numerator, denominator = 6;
  cin >> y >> w;

  numerator = 7 - max(y, w);
  for(int i = 2; i <= 6; i++) {
    if(numerator % i == 0 && denominator % i == 0) {
      numerator /= i;
      denominator /= i;
    }
  }
  
  cout << numerator << '/' << denominator << endl;
  return 0;
} 