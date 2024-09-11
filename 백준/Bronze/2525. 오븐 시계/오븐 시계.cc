#include <iostream>

using namespace std;

int main()
{
	int H, M, needMinute;

	cin >> H >> M;
	cin >> needMinute;

	if ((0 <= H && H <= 23) && (0 <= M && M <= 59) && (0 <= needMinute && needMinute <= 1000))
	{
		int totalMinute = H * 60 + M + needMinute;

		H = (totalMinute / 60) % 24;
		M = totalMinute % 60;

		cout << H << " " << M << endl;
	}

}