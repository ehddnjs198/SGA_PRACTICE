

//������ ������ ����
//������ ������ ����

//������ ������ ����
//������ ������ ����
//������ ������ ����
//������ ������ ����

//������ ������ ���������� ������ ����

#include<iostream>
#include<time.h>

using namespace std;

void WallnamBBong()
{
	int sojigum = 100000;
	int shape[3];
	int num[3];
	int card[52];
	int turn = 0;
	srand(time(nullptr));

	for (int i = 0; i < 52; ++i)
		card[i] = i;
	
	for (int i = 0; i < 1000; ++i)
	{
		int index1 = rand() % 52;
		int index2 = rand() % 52;

		int temp = card[index1];
		card[index1] = card[index2];
		card[index2] = temp;
	}

	for (int i = 0; i < 52; i++)
	{
		cout << card[i] << " ";
	}

	
	while (true)
	{
		int bettingMoney;
		cout << endl;
		cout << "���� �ݾ��� �Է��ϼ��� ���� = ";
		cin >> bettingMoney;
		for (int i = 0; i < 3; ++i)
		{
			num[i] = card[turn + i] % 13;
			shape[i] = card[turn + i] / 13;

			switch (num[i])
			{
			case 1:
				cout << "A";
				break;
			case 11:
				cout << "J";
				break;
			case 12:
				cout << "Q";
				break;
			case 13:
				cout << "K";
				break;
			default:
				cout << num[i];
				break;
			}

			switch (shape[i])
			{
			case 0:
				cout << "��";
				break;
			case 1:
				cout << "��";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			default:
				break;
			}
		}

		

		if (num[0] < num[1] && num[1] < num[2])
		{
			sojigum += bettingMoney * 2;
		}
		else {
			sojigum -= bettingMoney;
		}
		cout << "�������� = ";
		cout << sojigum << endl;
		turn++;
	}
}

int main()
{
	WallnamBBong();
	return 0;
}