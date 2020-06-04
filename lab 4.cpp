#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


void menu();
long double fact(int n);
int F(int n);
int stepen(int N);
int sum_of_digit(int n);
int Gate(int n);
int Fait(int n);




int main(void)
{
	setlocale(LC_ALL, "Russian");
	int choose;
	menu();
	cout << "select task- ";
	cin >> choose;
	if (choose == 1)
	{
		int n;
		cout << "Enter the number to calculate the factorial: ";
		cin >> n;
		cout << "Factorial for a number=" << n << " = " << fact(n) << endl << endl; // fact(n) - function for calculating factorial. 
		return 0;
	}
	else if (choose == 2)
	{
		int n, i, rez = 1;
		cout << "Enter the number to calculate the factorial:";
		cin >> n;
		if (n < 0) // if the user entered a negative number 
			return 0; // return zero 
		if (n == 0) // if the user entered zero, 
			return 1; // return 1 
		else // In all other cases 
			for (i = 1; i <= n; i++) {
				rez = rez * i;
			}
		cout << rez;
	}
	else if (choose == 3) {
		setlocale(LC_ALL, "Russian");
		int n;
		cout << "vvedite n:";
		cin >> n;
		cout << F(n);
		return 0;
	}
	else if (choose == 4) {
		int N;
		cout << "vvedite N="; cin >> N;//натуральное число N
		cout << stepen(N);
		if (stepen(N) == 1)cout << "yes";
		else cout << "no";
	}
	else if (choose == 5) {
		int num;
		cout << "Vvedite chislo:"; cin >> num;
		cout << "sum cifr=" << sum_of_digit(num);
		return 0;
	}
	else if (choose == 6) {
		int n;
		for (n = 1; n < 11; n++) {
			cout << "Fait(" << n << ")=" << Fait(n) << "Gate(" << n << ")=" << Gate(n) << endl;

		}
		return 0;
	}
}


void menu()

{
	cout << "1 - Задание 1 Рекурсивный факториал" << endl;
	cout << "2 - Задание 1 Не рекурсивный факториал" << endl;
	cout << "3 - Задание 2" << endl;
	cout << "4 - Задание 3" << endl;
	cout << "5 - 7 вариант- 2 задание" << endl;
	cout << "6 - 7 вариант- 3 задание" << endl;

}
long double fact(int n)
{
	if (n < 0) // if the user entered a negative number 
		return 0; // return zero 
	if (n == 0) // if the user entered zero, 
		return 1; // return 1 
	else // In all other cases 
		return n * fact(n - 1); // do recursion. 
}
int F(int n)
{
	if (n == 1)return 3;
	if (n > 1)
		return F(n - 1) * (n - 1);
	else
		return n;
}
int stepen(int N)
{
	if (N == 2)return 1;
	if (N % 2 == 1)return 0;
	else return stepen(N / 2);
}
int sum_of_digit(int n)
{
	if (n == 0)
		return 0;
	return (n % 10 + sum_of_digit(n / 10));
}
int Fait(int n)
{
	if (n == 1)return 4;
	else {
		return  4 * Fait(n - 1) - Gate(n - 1);
	}
}
int Gate(int n)
{
	if (n == 1)return -2;
	else {
		return  2 * Fait(n - 1) - Gate(n - 1);
	}
}
