#include <iostream>
#define MAX_ID_SIZE 50

using namespace std;

int main()
{
	string usedId;

	cin >> usedId;

	if (usedId.length() <= MAX_ID_SIZE)
	{
		if (usedId == usedId) cout << usedId + "??!" << endl;
	}
}