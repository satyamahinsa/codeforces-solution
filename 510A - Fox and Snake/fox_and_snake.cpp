#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n, m;
  cin >> n >> m;

  int another_pattern = 0;
  for(int i = 0; i < n; i++) {
    if(i % 2 == 0) {
      for(int j = 0; j < m; j++) {
        cout << "#";
      }
    } else {
      another_pattern++;
      for(int j = 0; j < m; j++) {
        if(another_pattern % 2 == 1 && j == m - 1) {
          cout << "#";
        } else if(another_pattern % 2 == 0 && j == 0) {
          cout << "#";
        } else {
          cout << ".";
        }
      }
    }
    cout << endl;
  }

  return 0;
} 