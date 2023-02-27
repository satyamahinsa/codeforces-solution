#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    long long arr[3], n, temp = 0;
    cin >> arr[0] >> arr[1] >> arr[2] >> n;
    sort(arr, arr + 3);

    temp += arr[2] - arr[0];
    temp += arr[2] - arr[1];

    if(n >= temp) {
      n -= temp;
      if(n % 3 == 0) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
} 