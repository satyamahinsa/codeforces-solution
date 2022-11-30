#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    string b;
    cin >> b;

    string a; 
    a += b[0];
    for(int i = 1; i < b.size(); i++) {
      if(b[i] == b[i + 1]) {
        a += b[i + 1];
        i++;
      } else {
        a += b[i];
      }
    }

    cout << a << endl;
  }

  return 0;
} 