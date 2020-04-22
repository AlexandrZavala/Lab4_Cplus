#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	// определить есть ли в заданной строке цифра 
	// вар-7

	SetConsoleCP(1251);	//ввод с консоли кирилицы
	char txt[255];
	char vowel[] = "123456789";
	cout << "Enter text: ";
	cin.getline(txt, 255);//получаем строку с консоли
	char *p = txt;//указатель на первый символ в строке
	int col = 0;
	while (*p)//пока не достигнут конец строки
	{
		if (strchr(vowel, *p))
		{
			col++;
		}
		p++;//переходим на другой символ
	}

	cout << "number of digits - " << col << endl; //выводим результат
	return 0;
}