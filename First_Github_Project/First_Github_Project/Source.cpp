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
	string filename2 = "C:\\for_Github_Projects\\ExampleOfRepository\\First_Github_Project\\First_Github_Project\\filtred.txt";

	ifstream fileIn; //создаём экземпляр класса для чтения из файла
	ofstream fileOut;

	fileIn.open(filename1);
	fileOut.open(filename2);

	if (fileIn.fail()) //был ли открыт файл или нет
	{
		cout << "error opening file!" << endl;
		return 1;
	}
	if (fileOut.fail()) //был ли открыт файл или нет
	{
		cout << "error opening file!" << endl;
		return 1;
	}

	string str = "";

	string ban1 = "";
	string ban2 = "";

	string newStr = "";
	string tempStr = "";

	while (!fileIn.eof())
	{
		string line;
		getline(fileIn, line);
		str += line + "\n";
	}
	cout << str << endl;

	while (!fileOut.eof())
	{
		string line;
		getline(fileIn, line);
		str += line + "\n";
	}

	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] != ' ' && i != str.length())
		{
			/*j++;
			tempStr += str[i];*/
		}
	}






		fileIn.close();
		fileOut.close();



	system("pause");
	return 0;
}
