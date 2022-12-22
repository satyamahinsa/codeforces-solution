#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    int s[n];
    for(int i = 0; i < n; i++) {
      cin >> s[i];
    }

    sort(s, s + n);

    int min_result = s[1] - s[0], temp;
    for(int i = 1; i < n - 1; i++) {
      temp = s[i + 1] - s[i];
      if(temp <= min_result) {
        min_result = temp;
      }
    }
    
    cout << min_result << endl;
  }

  return 0;
} 