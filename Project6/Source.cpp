#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	// ���������� ���� �� � �������� ������ ����� 
	// ���-7

	SetConsoleCP(1251);	//���� � ������� ��������
	char txt[255];
	char vowel[] = "123456789";
	cout << "Enter text: ";
	cin.getline(txt, 255);//�������� ������ � �������
	char *p = txt;//��������� �� ������ ������ � ������
	int col = 0;
	while (*p)//���� �� ��������� ����� ������
	{
		if (strchr(vowel, *p))
		{
			col++;
		}
		p++;//��������� �� ������ ������
	}

	cout << "number of digits - " << col << endl; //������� ���������
	return 0;
}