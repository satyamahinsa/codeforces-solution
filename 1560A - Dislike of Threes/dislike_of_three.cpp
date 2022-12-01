#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  vector<int> elements;
  for(int i = 1; i <= 2000; i++) {
    if(i % 3 == 0 || i % 10 == 3) {
      continue;
    } else {
      elements.push_back(i);
    }
  }

  while(t--) {
    int k;
    cin >> k;

    cout << elements[k - 1] << endl;
  }

  return 0;
} 