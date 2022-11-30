#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int k, r, temp = 1, count = 1;
  cin >> k >> r;

  while((k * temp) % 10 != r) {
    if((k * temp) % 10 == 0) {
      break;
    }
    temp++;
    count++;
  }

  cout << count << endl;
  return 0;
}