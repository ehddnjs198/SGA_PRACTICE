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
	cout << "�¾ �⵵�� �Է��ϼ��� = ";
	cin >> getNum;
	if (getNum.length() == 2)
		getNum = "19" + getNum;

	string month, day;
	cout << "���� �Է��ϼ��� = ";
	cin >> month;
	if (month.length() == 1)
		month = "0" + month;

	while (true)
	{
		cout << "���� �Է��ϼ��� = ";
		cin >> day;
		//���� ����ó��
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

	cout << "������ �Է��ϼ���";
	string _sex;
	bool cont;
	cin >> _sex;
	if (_sex == "����" || _sex == "��") cont = MAN;
	else if (_sex == "����" || _sex == "��") cont = WOMAN;

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
	//���� �˰���
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
	//���ڸ� �ֹι�ȣ �ռ�
	for (int i = 0; i < 6; ++i)
		temp += to_string(arr[rand() % 9]);


	cout << "������ �ֹι�ȣ�� = " << getNum + month + day + " - " + _sex + temp << endl;
}

int main()
{
	JuminProduce();

	return 0;
}