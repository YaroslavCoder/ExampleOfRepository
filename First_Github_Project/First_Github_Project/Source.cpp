#include <iostream> // ������� ��� ����, ����� �������� ��� ������� �++
#include <string> // ����� �������� ������

#include <iomanip> // setw(5) (5 - ������ �������)

#include <stdio.h>

#include <Windows.h>

#include <fstream> // ���������� ������ � �������

using namespace std; // ������� ��� ��� ������





int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ofstream - ������ 
	// ifstream - ������

	setlocale(LC_ALL, "Russian"); // ���������� ������� ����

	string filename1 = "C:\\for_Github_Projects\\ExampleOfRepository\\First_Github_Project\\First_Github_Project\\text.txt";
	string filename2 = "C:\\for_Github_Projects\\ExampleOfRepository\\First_Github_Project\\First_Github_Project\\badWords.txt";
	string filename3 = "C:\\for_Github_Projects\\ExampleOfRepository\\First_Github_Project\\First_Github_Project\\filtredText.txt";

	ifstream fileIn1; //������ ��������� ������ ��� ������ �� �����
	ifstream fileIn2;
	ofstream fileOut;

	fileIn1.open(filename1);
	fileIn2.open(filename2);
	fileOut.open(filename3);

	if (fileIn1.fail()) //��� �� ������ ���� ��� ���
	{
		cout << "error opening file! FileIn1" << endl;
		return 1;
	}
	if (fileIn2.fail()) //��� �� ������ ���� ��� ���
	{
		cout << "error opening file! FileIn2" << endl;
		return 1;
	}
	if (fileOut.fail()) //��� �� ������ ���� ��� ���
	{
		cout << "error opening file! fileOut" << endl;
		return 1;
	}

	string str = "";

	string banWords = "";

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
		string line;
		string line2;
		getline(fileIn2, line);
		banWords += line + '\n';
	}

	cout << banWords << endl;

	for (int i = 0; i <= str.length(); i++)
	{
		int k = 0;

		if (str[i] != banWords[k] || str[i] != banWords[k])
		{
			k = 0;
			newStr += str[i];
		}
		else
		{
			k++;
			newStr += ' ';
		}
	}

	cout << newStr << endl;




		fileIn1.close();
		fileIn2.close();
		fileOut.close();



	system("pause");
	return 0;
}
