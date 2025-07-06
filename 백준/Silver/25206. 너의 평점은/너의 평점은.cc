#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string subjectName, grade; // 과목명, 학점용 등급
	double subjectTime = 0.0, totalSubTime = 0.0, gradeForFloat = 0.0, averageGrade = 0.0; // 이수학점, 총 이수학점, 등급변환용 학점, 평점

	vector <pair<double, string>> scoreVector;
	vector <pair<string, double>> gradeVector =
	{
		{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}
	};

	for (int i = 0; i < 20; i++)
	{
		cin >> subjectName >> subjectTime >> grade;

		scoreVector.push_back({ subjectTime, grade });
	}

	for (auto eachScore : scoreVector)
	{
		double eachSubTime = eachScore.first;	// 과목별 이수학점
		string eachSubGrade = eachScore.second; // 과목별 등급

		for (auto eachGrade : gradeVector)
		{
			string subjectGradeName = eachGrade.first; // 학점별 등급명
			double subjectGrade = eachGrade.second; // 학점별 등급점수

			if (eachSubGrade == subjectGradeName)
			{
				gradeForFloat += eachSubTime * subjectGrade; // 등급 = 이수학점 * 학점별 등급점수
				totalSubTime += eachSubTime;	// 총 이수학점 = 이수학점 누적
			}
		}
	}

	averageGrade = gradeForFloat / totalSubTime;
	cout.precision(7);
	cout << averageGrade << endl;
    
    return 0;
}