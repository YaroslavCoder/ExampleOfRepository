#include <iostream> // команда для того, чтобы работали все команды С++
#include <string> // чтобы работали строки

#include <iomanip> // setw(5) (5 - ширина колонки)

#include <stdio.h>

#include <Windows.h>

#include <fstream> // библиотека работы с файлами

using namespace std; // команда для доп команд





int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ofstream - запись 
	// ifstream - чтение

	setlocale(LC_ALL, "Russian"); // подключить русский язык

	string filename1 = "C:\\for_Github_Projects\\ExampleOfRepository\\First_Github_Project\\First_Github_Project\\text.txt";
	string filename2 = "C:\\for_Github_Projects\\ExampleOfRepository\\First_Github_Project\\First_Github_Project\\badWords.txt";
	string filename3 = "C:\\for_Github_Projects\\ExampleOfRepository\\First_Github_Project\\First_Github_Project\\filtredText.txt";

	ifstream fileIn1; //создаём экземпляр класса для чтения из файла
	ifstream fileIn2;
	ofstream fileOut;

	fileIn1.open(filename1);
	fileIn2.open(filename2);
	fileOut.open(filename3);

	if (fileIn1.fail()) //был ли открыт файл или нет
	{
		cout << "error opening file! FileIn1" << endl;
		return 1;
	}
	if (fileIn2.fail()) //был ли открыт файл или нет
	{
		cout << "error opening file! FileIn2" << endl;
		return 1;
	}
	if (fileOut.fail()) //был ли открыт файл или нет
	{
		cout << "error opening file! fileOut" << endl;
		return 1;
	}

	string str = "";

	string banWord1 = "";
	string banWord2 = "";

	string newStr = "";

	while (!fileIn1.eof())
	{
		string line;
		getline(fileIn1, line);
		str += line + "\n";
	}
	cout << str << endl;

	while (!fileIn2.eof())
	{
		string line1;
		string line2;
		getline(fileIn2, line1);
		banWord1 += line1 + '\n';
		getline(fileIn2, line2);
		banWord2 += line2 + '\n';
	}

	cout << banWord1 << endl;
	cout << banWord2 << endl;

	for (int i = 0; i <= str.length(); i++)
	{
		int k = 0;

		if (str[i] == banWord1[k])
		{
			k++;
			if (k == banWord1.length())
			{
				for (int g = 0; g <= banWord1.length(); g++)
				{
					newStr += "*";
				}
			}
			else if (k == banWord2.length())
			{
				for (int h = 0; h <= banWord2.length(); h++)
				{
					newStr += "*";
				}
			}
		}
			else
			{
			k = 0;
				newStr += str[i];
			}
	}

	cout << newStr << endl;




		fileIn1.close();
		fileIn2.close();
		fileOut.close();



	system("pause");
	return 0;
}
