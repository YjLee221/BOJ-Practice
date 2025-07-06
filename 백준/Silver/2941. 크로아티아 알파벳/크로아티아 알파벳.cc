#include <iostream>
#include <string>

using namespace std;

int main()
{
	string answer;
	cin >> answer;

	int letterCnt = 0;

	string specialWord[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	for (string word : specialWord)
	{
		while (answer.find(word) != string::npos)
		{
			answer.replace(answer.find(word), word.length(), "a");
		}
	}

	cout << answer.length() << endl;
}