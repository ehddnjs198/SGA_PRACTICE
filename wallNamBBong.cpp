#include<iostream>
#include<time.h>
#include<vector>

#define SIZE			cardGame.size() 

using namespace std;

void WallNamBBong()
{
	srand(time(nullptr));
	vector<int> cardGame;
	bool cont = false;
	//안에 카드들 초기화??
	for (int i = 0; i < 4; ++i)
		for (int j = 0; j < 13; ++j)
			cardGame.push_back(j + 1);

	//셔플 알고리즘
	for (int i = 0; i < 1000; ++i)
	{
		int index1 = rand() % cardGame.size();
		int index2 = rand() % cardGame.size();
		
		int temp = cardGame[index1];
		cardGame[index1] = cardGame[index2];
		cardGame[index2] = temp;
	}

	int haveMoney = 10000;//소유한 금액
	
	while (true)
	{
		int bettingMoney;
		cout << "배팅할 금액을 적으시요 = ";
		cin >> bettingMoney;
		if (haveMoney - bettingMoney <= 0)
		{
			cout << "다시 입력해주세요 소지금이 모자랍니다" << endl;
			continue;
		}
		for (int i = 0; i < cardGame.size(); ++i)
		{
			cout << cardGame[i] << " ";
		}

		int max = cardGame[SIZE - 1] > cardGame[SIZE - 3] ? cardGame[SIZE - 1] : cardGame[SIZE - 3];
		int min = cardGame[SIZE - 1] < cardGame[SIZE - 3] ? cardGame[SIZE - 1] : cardGame[SIZE - 3];

		cout << "소지금은 = " << haveMoney << endl;
		cout << "카드 나열 = ";
		for (int i = 1; i <= 3; i++)
		{
			switch (cardGame[SIZE-i])
			{
			case 1:
				cout << "A ";
				break;
			case 11:
				cout << "J ";
				break;
			case 12:
				cout << "Q ";
				break;
			case 13:
				cout << "K ";
				break;
			default:
				cout << cardGame[SIZE - i] << " ";
				break;
			}
		}
		cout << endl;
		

		if (haveMoney-bettingMoney <= 0) cont = true;

		if (min < cardGame[SIZE - 2] && cardGame[SIZE - 2] < max)
		{
			haveMoney += 2 * bettingMoney;
			
		}
		else
		{
			haveMoney -= bettingMoney;
			if (haveMoney == 0) cont = true;
		}

		cout << "사이즈의 크기느" << cardGame.size() << endl;
		for (int i = 0; i < 3; ++i)
		{
			if (cardGame.size() - 3 <= 0)// 수정할필요가 있다
			{
				cout << "게임이 끝났습니다." << endl;
				cont = true;
				break;
			}
			cardGame.pop_back();
		}

		if (cont)break;
	}
	

	
	
}

int main()
{
	WallNamBBong();
	return 0;
}