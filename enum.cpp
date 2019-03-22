#include<iostream>

using namespace std;

//enum
//열거형은 대문자로
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

//이넘문은 대문자로 !!
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
		cout << "오른쪽 걷기" << endl;
		break;
	case L_WALK:
		cout << "왼쪽 걷기" << endl;
		break;
	case R_RUN:
		cout << "오른쪽 뛰기" << endl;
		break;
	case L_RUN:
		cout << "오른쪽 뛰기" << endl;
		break;
	default:
		break;
	}

	if (m_motion == L_WALK)
	{
		m_motion = R_RUN;

		if (m_motion == R_RUN)
		{
			cout << "오른쪽으로 뛴다" << endl;
		}
	}

	return 0;
}