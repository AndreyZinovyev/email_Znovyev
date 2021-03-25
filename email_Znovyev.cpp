#include <iostream>
#include <string>
#include <vector>
using namespace std;


void InputrEmail(string& email);
void InputPassword(string& pass);

void InputEmail(string& email)
{
	cin >> email;
	string EmailPlus = "@mail.ru";
	email = email + EmailPlus;
	cout << "Ваш email: " << email << endl;
}

void InputPassword(string& pass)
{
	cin >> pass;
	int sum = 0;
	string letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string numbers = "1234567890";
	string symbols = "!@#$%^&*?";
	string nouse = " ()|йцукенгшщзхъфывапролджэячсмитьбю";
	int letterint = 0;
	int numbersint = 0;
	int symbolsint = 0;
	int nouseint = 0;
	for (int i = 0; i < pass.size(); i++)
	{
		for (int i1 = 0; i1 < letter.size(); i1++)
		{
			if (pass[i] == letter[i1])
			{
				letterint++;
			}
		}
	}
	if (letterint > 0)
	{
		sum++;
	}


	for (int i = 0; i < pass.size(); i++)
	{
		for (int i1 = 0; i1 < numbers.size(); i1++)
		{
			if (pass[i] == numbers[i1])
			{
				numbersint++;
			}
		}
	}
	if (numbersint > 0)
	{
		sum++;
	}



	for (int i = 0; i < pass.size(); i++)
	{
		for (int i1 = 0; i1 < symbols.size(); i1++)
		{
			if (pass[i] == symbols[i1])
			{
				symbolsint++;
			}
		}
	}
	if (symbolsint > 0)
	{
		sum++;
	}


	for (int i = 0; i < pass.size(); i++)
	{
		for (int i1 = 0; i1 < nouse.size(); i1++)
		{
			if (pass[i] == nouse[i1])
			{
				nouseint++;
			}
		}
	}


	if (pass.size() < 7)
	{
		sum--;
	}


	if (nouseint > 0)
	{
		sum = 0;
	}


	cout << "switch started with sum:" << sum << endl;
	switch (sum)
	{
	case 1:
		cout << "У вас легкий пароль.\n";
		break;
	case 2:
		cout << "У вас средний пароль\n ";
		break;
	case 3:
		cout << "У вас сложный пароль\n ";
		break;
	case 0:
		cout << "Ваш пароль некорректен\n ";
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите e-mail:\n";
	string Email;
	InputEmail(Email);
	cout << "Введите пароль:\n";
	string password;
	InputPassword(password);
}