#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n;
  cin >> n;

  int children[n];
  for(int i = 0; i < n; i++) {
    cin >> children[i];
  }

  vector<int> math, program, pe;
  for(int i = 0; i < n; i++) {
    if(children[i] == 1) {
      math.push_back(i);
    } else if(children[i] == 2) {
      program.push_back(i);
    } else if(children[i] == 3) {
      pe.push_back(i);
    }
  } 

  int w = min(math.size(), min(program.size(), pe.size()));
  cout << w << endl;

  for(int i = 0; i < w; i++) {
    cout << math[i] + 1 << " " << program[i] + 1 << " " << pe[i] + 1 << endl;
  }

  return 0;
} 