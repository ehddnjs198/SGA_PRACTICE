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
	//�ȿ� ī��� �ʱ�ȭ??
	for (int i = 0; i < 4; ++i)
		for (int j = 0; j < 13; ++j)
			cardGame.push_back(j + 1);

	//���� �˰���
	for (int i = 0; i < 1000; ++i)
	{
		int index1 = rand() % cardGame.size();
		int index2 = rand() % cardGame.size();
		
		int temp = cardGame[index1];
		cardGame[index1] = cardGame[index2];
		cardGame[index2] = temp;
	}

	int haveMoney = 10000;//������ �ݾ�
	
	while (true)
	{
		int bettingMoney;
		cout << "������ �ݾ��� �����ÿ� = ";
		cin >> bettingMoney;
		if (haveMoney - bettingMoney <= 0)
		{
			cout << "�ٽ� �Է����ּ��� �������� ���ڶ��ϴ�" << endl;
			continue;
		}
		for (int i = 0; i < cardGame.size(); ++i)
		{
			cout << cardGame[i] << " ";
		}

		int max = cardGame[SIZE - 1] > cardGame[SIZE - 3] ? cardGame[SIZE - 1] : cardGame[SIZE - 3];
		int min = cardGame[SIZE - 1] < cardGame[SIZE - 3] ? cardGame[SIZE - 1] : cardGame[SIZE - 3];

		cout << "�������� = " << haveMoney << endl;
		cout << "ī�� ���� = ";
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

		cout << "�������� ũ���" << cardGame.size() << endl;
		for (int i = 0; i < 3; ++i)
		{
			if (cardGame.size() - 3 <= 0)// �������ʿ䰡 �ִ�
			{
				cout << "������ �������ϴ�." << endl;
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