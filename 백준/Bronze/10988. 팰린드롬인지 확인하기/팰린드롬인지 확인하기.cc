#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	cin >> a;

	string originA = a;
	reverse(a.begin(), a.end());

	bool result = (originA == a) ? 1 : 0;

	cout << result << endl;
}