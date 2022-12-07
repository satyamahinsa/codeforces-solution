#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    string task;
    cin >> task;

    int alphabet[100];
    for(int i = 65; i <= 97; i++) {
      alphabet[i] = 0;
    }

    bool found = false;
    for(int i = 0; i < n; i++) {
      if(task[i] != task[i - 1] && alphabet[int(task[i])] > 0) {
        found = true;
        cout << "NO" << endl;
        break;
      }
      alphabet[int(task[i])]++;
    }

    if(!found) {
      cout << "YES" << endl;
    }
  }
  return 0;
} 