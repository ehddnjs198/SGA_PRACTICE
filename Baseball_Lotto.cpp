#include<iostream>
#include<string>
#include<time.h>
using namespace std;

//void BaseBall()
//{
//	srand(time(nullptr));
//	string computerNum = to_string(rand() % 800 + 100);
//	int strikeCnt = 0;
//	int ballCnt = 0;
//	int cnt = 10;
//	cout << "치트는 = " << computerNum << endl;
//	while (cnt--)
//	{
//		string getNum;
//		cout << "숫자를 입력하세요 = ";
//		cin >> getNum;
//		for (int i = 0; i < 3; i++)
//			for (int j = 0; j < 3; j++)
//				if (getNum[i] == computerNum[j])
//					i == j ? strikeCnt++ : ballCnt++;
//		if (strikeCnt == 3)
//		{
//			cout << "정답입니다." << endl;
//			break;
//		}
//		cout << strikeCnt << "스트라이크" << endl;
//		cout << ballCnt << "볼" << endl;
//		strikeCnt = 0;
//		ballCnt = 0;	
//	}
//}

void Lotto()
{
	srand(time(nullptr));
	int bonus = rand() % 10;
	unsigned int randomNum = rand() % 900000 + 100000;
	string lottoNum = to_string(randomNum)+to_string(bonus);
	cout <<"치트는 = " <<lottoNum << endl;
	string getNum;
	int cnt = 0;
	cout << "숫자를 입력하세요 = ";
	cin >> getNum;
	for (int i = 0; i < 7; i++)
	{
		if (getNum[i] == lottoNum[i])
			cnt++;
	}
	if (cnt == 7)
		cout << "1등 입니다." << endl;
	else if (cnt == 6)
		cout << "2등 입니다." << endl;
	else if (cnt == 5)
		cout << "3등 입니다." << endl;
	else if (cnt == 4)
		cout << "4등 입니다." << endl;
	else
		cout << "5등 입니다." << endl;
}

int main()
{
	//BaseBall();
	Lotto();
	return 0;
}