#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int row, column;
  cin >> row >> column;

  char pixels[row][column];
  string answer = "#Black&White";
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < column; j++) {
      cin >> pixels[i][j];
      if(pixels[i][j] == 'C' || pixels[i][j] == 'M' || pixels[i][j] == 'Y') {
        answer = "#Color";
      }
    }
  }

  cout << answer << endl;

  return 0;
} 