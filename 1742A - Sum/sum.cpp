#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int num[3];
    for(int i = 0; i < 3; i++) {
      cin >> num[i];
    }

    sort(num, num + 3);
    if(num[0] + num[1] == num[2]) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
} 