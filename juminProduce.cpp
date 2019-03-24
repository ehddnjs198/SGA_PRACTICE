#include<iostream>
#include<time.h>
#include<string>
using namespace std;

enum sex
{
	MAN = 1,
	WOMAN
};

void JuminProduce()
{
	string getNum;
	cout << "태어난 년도를 입력하세요 = ";
	cin >> getNum;
	if (getNum.length() == 2)
		getNum = "19" + getNum;

	string month, day;
	cout << "달을 입력하세요 = ";
	cin >> month;
	if (month.length() == 1)
		month = "0" + month;

	while (true)
	{
		cout << "일을 입력하세요 = ";
		cin >> day;
		//요일 예외처리
		switch (atoi(month.c_str()))
		{
		case 2:
			if (atoi(day.c_str()) > 28 || atoi(day.c_str()) < 1) continue;
		case 1 || 3 || 5 || 7 || 8 || 10 || 12:
			if (atoi(day.c_str()) > 31 || atoi(day.c_str()) < 1) continue;
		default:
			if (atoi(day.c_str()) > 30 || atoi(day.c_str()) < 1) continue;
		}
		if (day.length() == 1)
			day = "0" + day;
		break;
	}

	cout << "성별을 입력하세요";
	string _sex;
	bool cont;
	cin >> _sex;
	if (_sex == "남자" || _sex == "남") cont = MAN;
	else if (_sex == "여자" || _sex == "여") cont = WOMAN;

	if (MAN)
	{
		int temp[2] = { 1,3 };
		_sex = to_string(temp[rand() % 2]);
	}
	else if (WOMAN)
	{
		int temp[2] = { 1,3 };
		_sex = to_string(temp[rand() % 2]);
	}

	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	//셔플 알고리즘
	for (int i = 0; i < 300; ++i)
	{
		int index1 = rand() % 9;
		int index2 = rand() % 9;

		int temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
	}

	srand(time(nullptr));
	string temp = "";
	//끝자리 주민번호 합성
	for (int i = 0; i < 6; ++i)
		temp += to_string(arr[rand() % 9]);


	cout << "생성된 주민번호는 = " << getNum + month + day + " - " + _sex + temp << endl;
}

int main()
{
	JuminProduce();

	return 0;
}