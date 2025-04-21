// 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
// 각 테스트 케이스마다 "Case #x: A + B = C" 형식으로 출력한다. x는 테스트 케이스 번호이고 1부터 시작하며, C는 A+B이다.
// Case #1: 1 + 1 = 2

#include <iostream>

using namespace std;

int main()
{
	int T;
	int A, B = 0;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;

		if(A > 0 && B < 10)
			cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << endl;
	}

	return 0;
}