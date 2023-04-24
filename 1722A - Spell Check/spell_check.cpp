#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n, count = 0;
    cin >> n;
    string s, check = "Timur";
    cin >> s;

    sort(s.begin(), s.end());
    sort(check.begin(), check.end());
    if(s == check) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}