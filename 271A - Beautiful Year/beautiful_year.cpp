#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     int y;
     cin >> y;

     while(true) {
          y++;
          int a = y / 1000;
          int b = y / 100 % 10; 
          int c = y / 10 % 10;
          int d = y % 10;

          if (a != b && a != c && a != d && b != c && b != d && c != d) {
               cout << y << endl;
               break;
          }
     }

     return 0;
}