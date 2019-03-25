#include<iostream>

using namespace std;

typedef struct gameDataBase
{
	string title;
	string reputation;
	int price;
	int score;
	string remark;
}gameDB;


void BlizzardInit(gameDB blizzard[], int &_cnt, string _title, string _reputation, int _price, int _score, string _remark)
{
	blizzard[_cnt].title      = _title;
	blizzard[_cnt].reputation = _reputation;
	blizzard[_cnt].price      = _price;
	blizzard[_cnt].score      = _score;
	blizzard[_cnt].remark     = _remark;
	_cnt++;
}

void Print(gameDB db[])
{
	for (int i = 0; i < 3; i++)
	{
		cout << "Ÿ��Ʋ��   = " << db[i].title.c_str() << endl;
		cout << "������     = " << db[i].reputation.c_str() << endl;
		cout << "������     = " << db[i].price << endl;
		cout << "������     = " << db[i].score << endl;
		cout << "Ư�̻����� = " << db[i].remark.c_str() << endl;
	}
}

int main()
{
	gameDB blizzard[3];
	int cnt = 0;

	BlizzardInit(&blizzard[cnt], cnt, "������ġ", "���", 50000, 50, "��������");
	BlizzardInit(&blizzard[cnt], cnt, "��Ÿũ����Ʈ", "�뽿", 30000, 30, "�����");
	BlizzardInit(&blizzard[cnt], cnt, "��ũ����Ʈ", "�뽿", 45000, 100, "����");

	Print(blizzard);

	return 0;
}
