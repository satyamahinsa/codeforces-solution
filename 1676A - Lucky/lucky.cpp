#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    string ticket;
    cin >> ticket;

    int sum_first = 0, sum_last = 0;
    for(int i = 0; i < 6; i++) {
      if(i < 3) {
        sum_first += (int) ticket[i];
      } else {
        sum_last += (int) ticket[i];
      }
    }

    if(sum_first == sum_last) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
} 