#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    string s;
    cin >> s;

    int result = 0;
    if(s[0] == 'y' || s[0] == 'Y') {
      result++;
    }
    if(s[1] == 'e' || s[1] == 'E') {
      result++;
    }
    if(s[2] == 's' || s[2] == 'S') {
      result++;
    }

    if(result == 3) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
} 