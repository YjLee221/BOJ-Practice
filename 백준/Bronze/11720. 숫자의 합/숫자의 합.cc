#include <iostream>
#include <string>

using namespace std;

int main()
{
	// N개의 숫자가 공백 없이 쓰여있다.
	int N, sum = 0;
	string num;

	// 첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)
	cin >> N;
	cin >> num;

	for (int i = 0; i < N; i++) 
	{
		sum += num[i] - '0';
	}

	cout << sum;
}