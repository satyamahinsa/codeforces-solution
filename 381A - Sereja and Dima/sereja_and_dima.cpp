#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n;
  cin >> n;

  int cards[n];
  for(int i = 0; i < n; i++) {
    cin >> cards[i];
  }

  int sum_sereja = 0, sum_dima = 0, leftmost = 0, rightmost = n - 1;
  for(int i = 0; i < n; i++) {
    if(i % 2 == 0) {
      if(cards[leftmost] > cards[rightmost]) {
        sum_sereja += cards[leftmost];
        leftmost++;
      } else {
        sum_sereja += cards[rightmost];
        rightmost--;
      }
    } else {
      if(cards[leftmost] > cards[rightmost]) {
        sum_dima += cards[leftmost];
        leftmost++;
      } else {
        sum_dima += cards[rightmost];
        rightmost--;
      }
    }
  }
  
  cout << sum_sereja << " " << sum_dima << endl;
  return 0;
} 