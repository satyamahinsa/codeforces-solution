#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int x;
    cin >> x;

    int digits = log10(x) + 1;
    int temp = 1;
    int result = 10 * (x % 10 - 1);
    for(int i = 0; i < digits; i++) {
      result += temp;
      temp++;
    }

    cout << result << endl;
  }

  return 0;
} 