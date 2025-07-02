#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	// 첫 번째 줄에 N과 M이 주어진다
	int N, M;
	cin >> N >> M;
	int arr[101];

	// 배열 초기화
	for(int a = 0; a < N; a++)
	{
		arr[a] = a + 1; // 바구니의 번호를 1부터 N까지 초기화
	}

	// 두 번째 줄부터 M개의 줄에는 바구니의 순서를 역순으로 만드는 방법이 주어진다.
	for (int t = 1; t <= M; t++)
	{
		// 방법은 i, j
		int i, j;
		cin >> i >> j;

		// 왼쪽으로부터 i번째 바구니부터 j번째 바구니까지의 순서를 역순으로 만든다
		reverse(arr + i - 1, arr + j);
	}	

	// 마지막 줄에 바구니의 순서를 출력한다
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
};