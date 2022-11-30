#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n;
  cin >> n;

  int score[n];
  for(int i = 0; i < n; i++) {
    cin >> score[i];
  }

  int best = score[0], worst = score[0], count = 0;

  for(int i = 1; i < n; i++) {
    if(score[i] > best) {
      best = score[i];
      count++;
    }
    if(score[i] < worst) {
      worst = score[i];
      count++;
    }
  }

  cout << count << endl;

  return 0;
} 