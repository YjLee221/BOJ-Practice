#include <iostream>
#define MAX_NUMBER 10000

using namespace std;

int main()
{
	int a = 0;

	cin >> a;

	if (a >= 1 && a <= 10000)
	{
		int sum = 0;
		for (int i = 1; i <= a; i++)
		{
			sum += i;
		}
		cout << sum << endl;
	}
	else 
	{
		cout << "a는 1 ~ 10000의 정수만 쓸 수 있습니다." << endl;
	}
}