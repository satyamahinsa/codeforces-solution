#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n, arr[5], temp = 1, count = 0;
    cin >> n;

    for(int i = 0; i < 5; i++) {
      arr[i] = n % 10;
      n /= 10;
      if(arr[i] != 0) {
        count++;
      }
    }
    cout << count << endl;

    for(int i = 0; i < 5; i++) {
      if(arr[i] != 0) {
        cout << arr[i] * temp << " ";
        temp *= 10;
      } else {
        temp *= 10;
      }
    }
    cout << endl;
  }

  return 0;
} 