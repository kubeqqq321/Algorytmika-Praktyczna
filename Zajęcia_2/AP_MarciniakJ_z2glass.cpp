#include <iostream>
#include <string>


void solve()
{
	std::string tekst;
	std::cin >> tekst;

	int i = 0;
	int j = 1;
	int k = 0;
	int dlug = tekst.length();

	while ( i < dlug && j < dlug && k < dlug)
	{
		int t = tekst[(i + k) % dlug] - tekst[(j + k) % dlug];

		if (t == 0) ++k;
		else if (t < 0)
		{
			j += k + 1;
			k = 0;
		}
		else
		{
			i += k + 1;
			k = 0;
		}
		if(i == j)
			j++;
	}
	int odp;
	if (i < j)
		odp = i;
	else
		odp = j;
	std::cout << odp + 1 << std::endl;

}

int main()
{
	int ile_prob;
	std::cin >> ile_prob;
	while(ile_prob--)
	{
		solve();
	}
	return 0;
}

