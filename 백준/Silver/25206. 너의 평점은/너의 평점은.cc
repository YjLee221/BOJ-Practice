#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string name, grade;
    float credit, creditSum = 0.0f, sum = 0.0f;
    float gradeNum;

    for (int i = 0; i < 20; ++i)
    {
        cin >> name >> credit >> grade;

        if (grade[0] < 'A' || grade[0] > 'D') // A와 D가 아닌 경우
        {
            if (grade[0] == 'F') // F인 경우
            {
                creditSum += credit;
            }
            continue;
        }

        gradeNum = (float)4 - (grade[0] - 'A');
        if (grade[1] == '+') //+인 경우
        {
            gradeNum += 0.5f;
        }

        creditSum += credit;
        sum += credit * gradeNum;
    }
    cout.precision(7);
    cout << (sum / creditSum);
}