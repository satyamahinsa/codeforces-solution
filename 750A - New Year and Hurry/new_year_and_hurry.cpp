#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n, k, problems = 0, result = 0;
  cin >> n >> k;

  if(k <= 240) {
    for(int i = 1; i <= n; i++) {
      problems += 5 * i;
      if(problems + k <= 240) {
        result++;
        continue;
      } else {
        break;
      }
    }
  }

  cout << result << endl;

  return 0;
}