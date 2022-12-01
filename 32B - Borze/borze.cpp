#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  string borze_code;
  cin >> borze_code;

  for(int i = 0; i < borze_code.size(); i++) {
    if(borze_code[i] == '.') {
      cout << 0;
    } else if(borze_code[i] == '-' && borze_code[i + 1] == '.') {
      cout << 1;
      i++;
    } else if(borze_code[i] == '-' && borze_code[i + 1] == '-') {
      cout << 2;
      i++;
    }
  }

  return 0;
} 