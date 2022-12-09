#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int a, b;
    cin >> a >> b;

    if(a > b) {
      b += b;
    } else if(b > a) {
      a += a;
    } else {
      a += a;
      b += b;
    }

    if(a > b) {
      while(a != b) {
        b++;
      } 
    } else {
      while(a != b) {
        a++;
      } 
    }
    
    cout << a * b << endl;
  }

  return 0;
} 