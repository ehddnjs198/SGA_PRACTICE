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
//	cout << "ġƮ�� = " << computerNum << endl;
//	while (cnt--)
//	{
//		string getNum;
//		cout << "���ڸ� �Է��ϼ��� = ";
//		cin >> getNum;
//		for (int i = 0; i < 3; i++)
//			for (int j = 0; j < 3; j++)
//				if (getNum[i] == computerNum[j])
//					i == j ? strikeCnt++ : ballCnt++;
//		if (strikeCnt == 3)
//		{
//			cout << "�����Դϴ�." << endl;
//			break;
//		}
//		cout << strikeCnt << "��Ʈ����ũ" << endl;
//		cout << ballCnt << "��" << endl;
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
	cout <<"ġƮ�� = " <<lottoNum << endl;
	string getNum;
	int cnt = 0;
	cout << "���ڸ� �Է��ϼ��� = ";
	cin >> getNum;
	for (int i = 0; i < 7; i++)
	{
		if (getNum[i] == lottoNum[i])
			cnt++;
	}
	if (cnt == 7)
		cout << "1�� �Դϴ�." << endl;
	else if (cnt == 6)
		cout << "2�� �Դϴ�." << endl;
	else if (cnt == 5)
		cout << "3�� �Դϴ�." << endl;
	else if (cnt == 4)
		cout << "4�� �Դϴ�." << endl;
	else
		cout << "5�� �Դϴ�." << endl;
}

int main()
{
	//BaseBall();
	Lotto();
	return 0;
}