#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	int const max = 100;
	char* str_result = new char;
	char x[max];
	char str2[max];
	char str3[max];
	cout << "Vvedite stroku : " << endl;
	cin.get(x, max);
	cout << "Vvedite slovo posle kotogo nado vstavit : " << endl;
	cin >> str2;
	cout << "Vvedite slovo kotogo nado vstavit : " << endl;
	cin >> str3;

	char* p = strtok(x," ");	 	  //разбиение строки на лексемы
	while (p != NULL) {
		strcat(str_result, p);            //добавление к str_result - p
		strcat(str_result, " "); 	  //добавление пробела к str_result
		if (strcmp(p, str2) == 0) {       //сравнение строки p со строкой str2
			strcat(str_result, str3); //добавление к str_result строки str3
			strcat(str_result, " ");  //добавление к str_result пробела
		}
		p = strtok(NULL," "); 		 //сбор лексем в строку
	}
	cout << str_result << endl;
	return 0;
}