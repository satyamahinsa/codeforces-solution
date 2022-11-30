#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int x[4];
  cin >> x[0] >> x[1] >> x[2] >> x[3];

  for(int i = 0; i < 4; i++) {
    for(int j = i + 1; j < 4; j++) {
      if(x[i] < x[j]) {
        int temp = x[i];
        x[i] = x[j];
        x[j] = temp;
      }
    }
  }

  for(int i = 1; i < 4; i++) {
    x[i] = x[0] - x[i];
  }
  

  for(int i = 1; i < 4; i++) {
    cout << x[i] << " ";
  }

  return 0;
} 