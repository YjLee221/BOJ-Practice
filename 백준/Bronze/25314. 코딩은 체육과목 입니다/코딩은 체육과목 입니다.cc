#include <iostream>

using namespace std;

int main()
{
	int n;
	string nn = "long";

	cin >> n;

	if (n >= 4 && n <= 1000 && n % 4 == 0)
	{
		int cnt = n / 4;
		for (int i = 0; i < cnt; i++)
		{
			cout << "long ";
		}

		cout << "int";
	}

	return 0;
}