#include <iostream>

using namespace std;

int main()
{
	// 첫째 줄에 시험 본 과목의 개수 N
	int N;
	cin >> N;
	int ScoreList[1001];

	// 세준이의 현재 성적
	for (int i = 0; i < N; i++)
	{
		int score;
		cin >> score;
		ScoreList[i] = score;
	}

	int MaxScore = *max_element(ScoreList, ScoreList + N);
	
	double totalScore = 0;

	for (int j = 0; j < N; j++)
	{
		double ChangedScore = (double)ScoreList[j] / MaxScore * 100;
		totalScore += ChangedScore;
	}

	double AverageScore = totalScore / N;
	cout << AverageScore;

	return 0;
}