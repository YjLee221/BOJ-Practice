#include <iostream>

#define MAX_DICE_NUMBER 6

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, money = 0;

	cin >> a >> b >> c;

	if ((a >= 1 && a <= MAX_DICE_NUMBER) && (b >= 1 && b <= MAX_DICE_NUMBER) && (c >= 1 && c <= MAX_DICE_NUMBER))
	{
		if (a == b && b == c) money = 10000 + a * 1000;
		else if ((a == b) || (a == c)) money = 1000 + a * 100;
		else if (b == c) money = 1000 + b * 100;
		else money = max(max(a, b), c) * 100;

		cout << money << endl;
	}
	else cout << "주사위는 1~6의 숫자로 구성되어있습니다." << endl;
}