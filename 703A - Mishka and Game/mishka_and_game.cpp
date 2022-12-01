#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n;
  cin >> n;

  int m, c, total_m = 0, total_c = 0;
  for(int i = 0; i < n; i++) {
    cin >> m >> c;
    if(m > c) {
      total_m++;
    } else if(c > m) {
      total_c++;
    } else {
      continue;
    }
  }

  if(total_m > total_c) {
    cout << "Mishka" << endl;
  } else if(total_c > total_m) {
    cout << "Chris" << endl;
  } else {
    cout << "Friendship is magic!^^" << endl;
  }

  return 0;
} 