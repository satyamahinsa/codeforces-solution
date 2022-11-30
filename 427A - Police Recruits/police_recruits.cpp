#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n, events, police = 0, crime = 0;
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> events;

    if(events == -1) {
      if(police > 0) {
        police--;
      } else {
        crime++;
      }
    } else {
      police += events;
    }
  }

  cout << crime << endl;

  return 0;
} 