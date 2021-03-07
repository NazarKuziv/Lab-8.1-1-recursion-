// Lab_8_1-1.cpp
// < Кузів Назар >
// Лабораторна робота № 8.1
// Пошук та заміна символів у літерному рядку
// Варіант 6

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*Дано літерний рядок, який містить послідовність символів s0, …, sn, … .
 Вияснити, чи є серед цих символів пара сусідніх букв “SQ” або ”QS”.
*/

bool Include(const char* s, int i)
{

	if ((s[i] == 'S' && s[i + 1] == 'Q') || (s[i] == 'Q' && s[i + 1] == 'S'))
		return true;

	if (s[i] != '\0')
		return Include(s, i + 1);
	else
		return false;
}

int main()
{
	char s[101]; //Оголошення літерного рядка
	

	cout << "Enter string:" << endl;
	cin.getline(s, 100);

	if (Include(s, 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}
