#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int x[3], total;
  cin >> x[0] >> x[1] >> x[2];

  for(int i = 1; i < 3; i++) {
    char temp = x[i];
    int j = i - 1;

    while(j >= 0 && x[j] > temp) {
      x[j + 1] = x[j];
      j--;
    }

    x[j + 1] = temp;
  }

  total = x[2] - x[0];

  cout << total << endl;
  return 0;
} 