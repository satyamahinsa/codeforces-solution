#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
  if(num < 2) {
    return false;
  } else {
    for(int i = 2; i <= num / 2; i++) {
      if(num % i == 0) {
        return false;
      }
    }
    return true;
  }
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n, m;
  cin >> n >> m;

  int nextPrime = n + 1;
  while(!isPrime(nextPrime)) {
    nextPrime++;
  }

  if(nextPrime == m) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
} 