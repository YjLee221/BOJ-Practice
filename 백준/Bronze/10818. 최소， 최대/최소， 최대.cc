#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    
    vector<int> Num(N);
    
    for(int i = 0; i < N; i++) cin >> Num[i];
    
    sort(Num.begin(), Num.end());
    
    cout << Num.front() << " " << Num.back() << endl;
}