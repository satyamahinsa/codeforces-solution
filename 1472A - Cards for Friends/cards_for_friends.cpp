#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int w, h, n, paper = 1;
    cin >> w >> h >> n;

    while(w % 2 == 0) {
      w /= 2;
      paper *= 2;
    }
    while(h % 2 == 0) {
      h /= 2;
      paper *= 2;
    }

    if(n == 1) {
      cout << "YES" << endl;
    } else if(paper >= n) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
} 