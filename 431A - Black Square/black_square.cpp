#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int strip1, strip2, strip3, strip4;
  cin >> strip1 >> strip2 >> strip3 >> strip4;

  string s;
  cin >> s;

  int result = 0;
  for(int i = 0; i < s.length(); i++) {
    switch (s[i]) {
      case '1':
        result += strip1;
        break;
      case '2':
        result += strip2;
        break;
      case '3':
        result += strip3;
        break;
      case '4':
        result += strip4;
        break;
    }
  }

  cout << result << endl;
  return 0;
} 