#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, count = 0;
	string s;
	cin >> n;
	cin >> s;

	if (n >= 1)
	{
		for (int i = 0; i < n; i++)
		{
			s[i] = tolower(s[i]);
		}
		sort(s.begin(), s.end());

		for (int i = 0; i < n; i++)
		{
			if (s[i] != s[i + 1])
			{
				count++;
			}
		}

		if (count == 26)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}