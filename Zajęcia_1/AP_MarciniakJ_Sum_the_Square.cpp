
//  Sum the Square Zestaw 1 
#include <iostream>
#include <map>
#include <vector>


std::vector<int> gen (int a)
{

	std::vector<int>temp;
	std::map<int, int>mp;

	mp[a] = 1;
	temp.push_back(a);

	while(true)
	{
		int sum = 0;
		while(a)
		{
			sum += (a % 10) * (a % 10);
			a /= 10;
		}

		if (mp.find(sum) == mp.end())
		{
			mp[sum] = 1;
			temp.push_back(sum);
			a = sum;
		}

		else break;
	}

	return temp;
}


int main()
{
	int a, b;
	while (scanf_s("%d %d", &a, &b) == 2)
	{
		if (!a && !b)
			break;

		std::vector<int> vec1 = gen(a);
		std::vector<int> vec2 = gen(b);
		std::map<int, int> mapa;

		int maximum = 1000000000;

		for(int i = 0; i<vec1.size();i++)
		{
			mapa[vec1[i]] = i + 1;
		}


		for (int i = 0; i < vec2.size(); i++)
		{
			if (mapa.find(vec2[i]) != mapa.end())
			{
				maximum = std::min(maximum, i + 1 + mapa[vec2[i]]);
			}
		}


		if (maximum == 1000000000)
			maximum = 0;


		std::cout << a << " " << b << " " << maximum <<std::endl;
		//printf("%d %d %d\n", a, b, ans);

	}
	return 0;
}