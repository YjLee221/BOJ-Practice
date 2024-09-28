#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int doneStudent = 0;
    vector<int> studentCnt;
    
    // 28명의 제출한 학생 입력받기
    for (int i = 0; i < 28; i++)
    {
        cin >> doneStudent;
        studentCnt.push_back(doneStudent);  // 중복 확인은 불필요
    }

    // 제출한 학생 번호 정렬
    sort(studentCnt.begin(), studentCnt.end());

    // 제출하지 않은 학생 찾기
    vector<int> missingStudents;
    for (int i = 1; i <= 30; i++)
    {
        // 만약 i가 제출한 학생 목록에 없다면
        if (find(studentCnt.begin(), studentCnt.end(), i) == studentCnt.end())
        {
            missingStudents.push_back(i);
        }
    }

    // 제출하지 않은 학생 번호 출력
    for (int student : missingStudents)
    {
        cout << student << endl;
    }

    return 0;
}
