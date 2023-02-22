#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    long long n, count = 0, temp = 0;
    cin >> n;

    for(int i = 1; i <= 9; i++) {
      temp = i;
      while(temp <= n) {
        count++;
        temp = temp * 10 + i;
      }
    }

    cout << count << endl;
  }

  return 0;
} 