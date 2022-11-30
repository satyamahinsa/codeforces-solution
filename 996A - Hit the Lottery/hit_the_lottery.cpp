#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int bills = 0;
  int denominations[5] = {1, 5, 10, 20, 100};

  for (int i = 4; i >= 0; i--)
  {
    while (n >= denominations[i])
    {
      n -= denominations[i];
      bills++;
    }
  }

  cout << bills << endl;
  return 0;
}