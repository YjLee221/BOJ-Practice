#include <iostream>

using namespace std;

int main()
{
  int Num[101];
  int userNum = 0, findNum = 0, cnt = 0;

  cin >> userNum;

  for(int i = 0; i < userNum; i++)
  {
     cin >> Num[i];
  }

  cin >> findNum;

  for(int i = 0; i < userNum; i++)
  {
      if(Num[i] == findNum) cnt++;
  }

  cout << cnt;
}