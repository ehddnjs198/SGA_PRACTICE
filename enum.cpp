#include<iostream>

using namespace std;

//enum
//�������� �빮�ڷ�
enum color {
	RED,
	GREEN,
	BLUE = 1000,
	BLACK,
	WHITE,
};

enum motion {
	R_WALK,
	L_WALK,
	R_RUN,
	L_RUN,
};

//�̳ѹ��� �빮�ڷ� !!
void print()
{
	cout << "=================================================================" << endl;
}

int main()
{
	

	motion m_motion;
	m_motion = L_WALK;

	switch (m_motion)
	{
	case R_WALK:
		cout << "������ �ȱ�" << endl;
		break;
	case L_WALK:
		cout << "���� �ȱ�" << endl;
		break;
	case R_RUN:
		cout << "������ �ٱ�" << endl;
		break;
	case L_RUN:
		cout << "������ �ٱ�" << endl;
		break;
	default:
		break;
	}

	if (m_motion == L_WALK)
	{
		m_motion = R_RUN;

		if (m_motion == R_RUN)
		{
			cout << "���������� �ڴ�" << endl;
		}
	}

	return 0;
}