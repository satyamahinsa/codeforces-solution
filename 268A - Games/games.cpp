#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n;
  cin >> n;

  int h[n], a[n];

  for(int i = 0; i < n; i++) {
    cin >> h[i] >> a[i];
  }

  int count = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(a[i] == h[j]) {
        count++;
      }
    }
  }

  cout << count;

  return 0;
}