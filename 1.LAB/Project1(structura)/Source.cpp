#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

enum {
	INPUT = 1,
	OUTPUT,
	DELETE,
	EXIT = 0
};

enum Country {
	Non,
	Italy,
	Spain,
	England
};

enum Club {
	None,
	Manchester_city,
	Barcelona,
	Real_Madrid
};

struct Football {
	Country country = Non;
	Club club = None;
	string name;
	int gols = 0;
	int narusheniya = 0;
};

int menu();
void InputStruct();
void OutputStruct();

int const max = 20;
Football info[max] = {};

int main()
{
	int f;
	setlocale(0,"");
	while (1) {
		f = menu();
		cout << "return menu " << f << endl;
		system("pause");
		if (f == 0) break;
	}
	return 0;
}

int menu()
{
	int k;
	system("cls");
	cout << "����" << endl;
	cout << "\t���� [1]" << endl;
	cout << "\t����� [2]" << endl;
	cout << "\t�������� [3]" << endl;
	cout << "\t����� [0]" << endl;
	cin >> k;

	string nnn;

	switch (k) {
	case INPUT:
		InputStruct();
		cout << "��� : ";
		getline(cin, nnn);
		break;
	case OUTPUT:
		OutputStruct();
		break;
	case DELETE:
		break;
	case EXIT:
		return 0;
	}
	return 1;
}

void InputStruct()
{
//	int i;
	string nnn;
//	i = sizeof(info) / sizeof(Football);
	cout << "��� : ";
//	getline(cin,info[i].name);
	getline(cin, nnn);
	//	gets_s(info[i].name, 30);
	//	cout << "������� ������ : ";
	//	cin >> info[i].country;
	//	cout << "������� ������c��� ����� : ";
	//	cin >> info[i].gols;
	//	cin.ignore();
	//	cout << "������� ���������� �������������� : ";
	//	cin >> info[i].narusheniya;
	//	cin.ignore();
	//	cin.get();
}

void OutputStruct()
{
	int i;
	i = sizeof(info) / sizeof(Football);
	cout << "��� : ";
	cout << info[0].name;
	//	gets_s(info[i].name, 30);
	//	cout << "������� ������ : ";
	//	cin >> info[i].country;
	//	cout << "������� ������c��� ����� : ";
	//	cin >> info[i].gols;
	//	cin.ignore();
	//	cout << "������� ���������� �������������� : ";
	//	cin >> info[i].narusheniya;
	//	cin.ignore();
	//	cin.get();
}
