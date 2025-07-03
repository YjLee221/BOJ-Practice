#include <iostream>

using namespace std;

int main()
{
	// 첫 번째에는 테스트 케이스가 주어짐
	int T;
	cin >> T;

	// R번 반복, 문자열 S 받기
	for (int i = 0; i < T; i++)
	{
		int R;
		string S;
		cin >> R >> S;

		for (char c : S)
		{
			for (int j = 0; j < R; j++) cout << c;
		}

		cout << endl;
	}
	
	return 0;
}