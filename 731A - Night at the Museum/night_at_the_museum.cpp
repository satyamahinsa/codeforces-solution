#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  string s;
  cin >> s;

  char start = 'a';
  int result = 0;
  for(int i = 0; i < s.size(); i++) {
    int diff1, diff2;
    diff1 = abs(s[i] - start);
    diff2 = 26 - diff1;
    result += min(diff1, diff2);
    start = s[i];
  }

  cout << result << endl;
  return 0;
} 