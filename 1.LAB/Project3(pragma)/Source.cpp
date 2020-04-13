#include <iostream>
#include <iomanip>
using namespace std;

double func(double[3]);

int main()
{
	srand(time(NULL));
	setlocale(0,"");

	int a, i, j;
	double x1, x0, step, min, y1, y0, random;
	double c = 0.75, step_min = 0.0001;
	char surname[30];
	double A[1000][3],B[1000],T[3];

	cout << "Введите шаг step = ";
	cin >> step;

	cout << "Фамилия: ";
	cin >> surname;
	a = strlen(surname);

	for (i = 0, j = 1; i < 1000; i++, j++) {
		A[i][0] = j;
		A[i][1] = a;
		A[i][2] = rand() % 10 + 2;
		B[i]    = func(A[i]);
	}
	/*
	cout << "B = " << B[0] << endl;
	cout << "B = " << A[0][0] << endl;
	cout << "B = " << A[0][1] << endl;
	cout << "B = " << A[0][2] << endl;
	return 0;
	*/
	for (i = 0; i < 1000; i++) {
		y0 = B[i];
		do {
			random = (double)(rand()) / RAND_MAX * 2 - 1;
			x1     = A[i][0] + step * random;
			T[0]   = x1;
			T[1]   = A[i][1];
			T[2]   = A[i][2];
			y1     = func(T);

			if (y1 < y0) {
				A[i][0] = x1;
				B[i]    = y1;
			}

			step = step * c;
			if (step < step_min) {
				break;
			}
		} while (1);
	}

	cout << "B = " << B[0] << endl;
	min = B[0];
	for (i = 1; i < 1000; i++) {
		cout << "B = " << B[i] << endl;
		if (min > B[i]) {
			min = B[i];
		}
	}
//	cout << y0;
	cout << "min = " << min << endl;
	cout << endl;
	return 0;
}

double func(double A[3]) {
	int a, b, x;
	x = A[0];
	b = A[1];
	a = A[2];
	return cos(x) + (1 / b) * cos(a * x + 1) + (1 / pow(b, 2)) * cos(pow(a, 2) * x + 2) + (1 / pow(b, 3)) * cos(pow(a, 3) * x + 3) + (1 / pow(b, 4)) * cos(pow(a, 4) * x + 4);
}
