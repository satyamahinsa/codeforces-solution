#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n;
  cin >> n;

  int level = 0, index = 0, total = 0;
  while(total <= n) {
    level++;
    index += level;
    total += index;
    if(total > n) {
      level--;
    }
  }

  cout << level << endl;
  return 0;
} 