#include <iostream>
#include <vector>

using namespace std;

void SwapNum(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
};

int main()
{
	int N = 0, M = 0, i = 0, j = 0;
	cin >> N >> M;

	vector<int> bucketVec;

	for (int bucketNum = 0; bucketNum < N; bucketNum++)
	{
		bucketVec.push_back(bucketNum + 1);
	}


	for (int a = 0; a < M; a++)
	{
		cin >> i >> j;
		
		i = i - 1;
		j = j - 1;

		if (1 <= i <= j <= N)
		{
			SwapNum(bucketVec[i], bucketVec[j]);
		}
	}

	for (int v : bucketVec) cout << v << " ";
}