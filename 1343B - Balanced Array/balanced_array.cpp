#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t; 
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    int a[n], even = 2, odd = 1, sum1 = 0, sum2 = 0;
    for(int i = 0; i < n/2; i++) {
      a[i] = even;
      sum1 += even;
      even += 2;
    }
    
    for(int i = n/2; i < n; i++) {
      a[i] = odd;
      sum2 += odd;
      odd += 2;
    }

    while(sum2 < sum1) {
      a[n-1] += 2;
      sum2 += 2;
    }

    if(sum1 == sum2) {
      cout << "YES" << endl;
      for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
      }
      cout << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
} 