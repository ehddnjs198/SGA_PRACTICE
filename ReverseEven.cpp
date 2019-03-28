#include<iostream>
#include<string>
using namespace std;

void ReverseEven(string word)
{
	string temp = "";
	for (int i = word.length()-1, j = 0; i > -1; i--, j++)
	{
		if (j % 2)
			temp += word[i];
		else
			temp += word[j];
	}
	cout << temp << endl;
	
}

int main()
{
	string word;
	cin >> word;
	ReverseEven(word);
	return 0;
}