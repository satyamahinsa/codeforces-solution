#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);

     string num1, num2;
     cin >> num1 >> num2;

     if (num1.length() == num2.length()) {
          for (int i = 0; i < num1.length(); i++) {
               if (num1[i] == num2[i]) {
                    cout << 0;
               } else {
                    cout << 1;
               }
          }
     }

     return 0;
}