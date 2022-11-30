#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);

     int n;
     cin >> n;

     string ans;
     for (int i = 1; i <= n; i++)
     {
          if (i % 2 == 0)
          {
               ans += "I love ";
          }
          else if (i % 2 == 1)
          {
               ans += "I hate ";
          }

          if (i != n)
          {
               ans += "that ";
          }
     }

     cout << ans + "it" << endl;
     return 0;
}