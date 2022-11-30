#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  string guest_name, host_name, combine_name, pile;
  cin >> guest_name >> host_name >> pile;

  combine_name = guest_name + host_name;

  sort(combine_name.begin(), combine_name.end());
  sort(pile.begin(), pile.end());

  if(combine_name == pile) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
} 