#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    string s;
    cin >> s;

    bool result = true;
    if(s.length() % 2 != 0) {
      cout << "NO" << endl;
    } else {
      int half_string = s.length() / 2;
      for(int i = 0; i < half_string; i++) {
        if(s[i] != s[half_string + i]) {
          result = false;
          break;
        }
      }

      if(result == true) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
} 