#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n, sum = 0, one = 0;
    cin >> n;
    int candies;
    for(int i = 0; i < n; i++) {
      cin >> candies;
      if(candies == 1) {
        one++;
        sum++;
      } else {
        sum += 2;
      }
    }

    if(sum % 2 == 0) {
      if((sum / 2) % 2 == 0) {
        cout << "YES" << endl;
      } else {
        if(one) {
          cout << "YES" << endl;
        } else {
          cout << "NO" << endl;
        }
      }
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
} 