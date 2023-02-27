#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int a, b, temp = 0, count = 0;
    cin >> a >> b;

    if(a < b) {
      temp = b - a;
      count++;
      if(temp % 2 == 0) {
        count++;
      }
    } else if(a > b) {
      temp = a - b;
      count++;
      if(temp % 2 == 1) {
        count++;
      }
    }

    cout << count << endl;
  }

  return 0;
} 