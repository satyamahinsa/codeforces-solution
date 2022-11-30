#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n, k;
  cin >> n >> k;

  int arr[n], teams = 0;
  for(int i = 0; i < n; i++) {
    cin >> arr[i];

    if(arr[i] + k <= 5) {
      teams++;
    }
  }

  cout << teams / 3 << endl;
  return 0;
} 