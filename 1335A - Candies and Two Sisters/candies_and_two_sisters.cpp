#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  double n;
  long long int result;
  cin >> t;

  while(t--) {
    cin >> n;
    result = ceil((n / 2) - 1);
    cout << result << endl;
  }

  return 0;
}