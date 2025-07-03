#include <iostream>

using namespace std;

int main()
{
	// 알파벳 소문자로만 이루어진 단어 S
	string S;
	cin >> S;

	for (char c = 'a'; c <= 'z'; ++c)
	{
		int find = S.find(c);
		cout << find << " ";
	}
}