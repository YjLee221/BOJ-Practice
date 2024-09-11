#include <iostream>

using namespace std;

int main()
{
	int H = 0, M = 0;

	cin >> H >> M;

	if ((H >= 0 && H <= 23) && (M >= 0 && M <= 59))
	{
		if (M-45 < 0)
		{
			if (H > 0) H = H - 1;
			else if (H == 0) H = 23;

			M = (M - 45) + 60;
		}
		else
		{
			H = H;
			M = M - 45;
		}

		cout << H << " " << M << endl;
	}
}
