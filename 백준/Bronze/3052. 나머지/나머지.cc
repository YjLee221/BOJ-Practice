#include <iostream>
#include <set>
using namespace std;

int main()
{
    int A;
    set<int> rems;

    for (int i = 0; i < 10; ++i)
    {
        cin >> A;
        if (A > 0 && A <= 1000)
            rems.insert(A % 42);
        else
            --i;  // 잘못된 입력이면 다시 입력받기
    }

    cout << rems.size() << '\n';
    return 0;
}