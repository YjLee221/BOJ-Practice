#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// N: 바구니, M: 공을 넣는 방법
	int N = 0, M = 0, i = 0, j = 0, k = 0;

	cin >> N >> M;

	// N개의 바구니 벡터리스트 생성: 첫 번째 바구니는 0
	vector<int> bucketVect(N);

	// M번 돌면서 공을 넣는 방법 생성
	for (int inputBall = 0; inputBall < M; inputBall++)
	{
		cin >> i >> j >> k; // i번째 바구니, j번째 바구니, k번 공
		
		if (1 <= i <= j <= N && 1 <= k <= N)
		{
			for (int buketPos = i - 1; buketPos < j; buketPos++)
			{
				bucketVect[buketPos] = k;
			}
		}
	}
	
	for (int bv : bucketVect) cout << bv << " ";
}