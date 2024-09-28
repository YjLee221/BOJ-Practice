#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> userVector;
	int a = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> a;

		if (a < 100)
		{
			// 만약 입력한 숫자가 벡터리스트 안에 없다면 벡터에 넣기
			auto chooseNum = find(userVector.begin(), userVector.end(), a);
			if (chooseNum == userVector.end()) userVector.push_back(a);
		}
	}

	if (!userVector.empty())
	{
		auto maxNum = max_element(userVector.begin(), userVector.end());
		cout << *maxNum << endl;

		int maxNumIndex = distance(userVector.begin(), maxNum);
		cout << maxNumIndex + 1 << endl;
	}
}
