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
		cout << "타이틀은   = " << db[i].title.c_str() << endl;
		cout << "평점은     = " << db[i].reputation.c_str() << endl;
		cout << "가격은     = " << db[i].price << endl;
		cout << "점수는     = " << db[i].score << endl;
		cout << "특이사항은 = " << db[i].remark.c_str() << endl;
	}
}

int main()
{
	gameDB blizzard[3];
	int cnt = 0;

	BlizzardInit(&blizzard[cnt], cnt, "오버워치", "쏘쏘", 50000, 50, "어지러움");
	BlizzardInit(&blizzard[cnt], cnt, "스타크래프트", "잼슴", 30000, 30, "어려움");
	BlizzardInit(&blizzard[cnt], cnt, "워크래프트", "잼슴", 45000, 100, "쉬움");

	Print(blizzard);

	return 0;
}
