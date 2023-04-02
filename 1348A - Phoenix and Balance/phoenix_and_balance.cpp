#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n, temp = 2, result = 0;
    cin >> n;

    for(int i = 2; i <= n; i += 2) {
      result += temp;
      temp *= 2;
    }

    cout << result << endl;
  }

  return 0;
} 