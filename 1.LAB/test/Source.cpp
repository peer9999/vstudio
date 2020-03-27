#include <iostream>
#include <cstdlib>
using namespace std;
const int k = 3;
void fun1(int** arr, int x, int y);
void* fun2(int arr[][k]);
void fun3(int arr[k][k]);
void fun4(int**&arr, int x, int y);
int main()
{
	int n, m, i, j;
//	int arr2[][];
	int arr3[k][k];
	cin >> n >> m;
	int** arr1 = new int* [n];
	for (i = 0; i < n; i++) {
		arr1[i] = new int[m];
		for (j = 0; j < m; j++) {
			arr1[i][j] = rand() % 10 + 1;
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
//	fun2(arr2);
	fun1(arr1, n, m);
	for (i = 0; i < k; i++) {
		for (j = 0; j < k; j++) {
			arr3[i][j]=rand() % 10 + 1;
		}
	}
	cout << endl;
	fun3(arr3);
	cout << endl;
	fun4(arr1, n, m);
}

void fun1(int** arr, int n, int m) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (i == j) {
				cout << "\n";
				cout << " " << arr[i][j];
			}
		}
	}
}

void* fun2(int arr[][k]) {
	int i, j;
	int z;
	for (i = 0; i < z; i++) {
		for (j = 0; j < k; j++) {
			arr[i][j] = rand() % 10 + 1;
		}
		if (i == 0) {
			cout << " " << arr[i][j];
		}
	}
}

void fun3(int arr[k][k]) {
	int i, j;
	for (i = 0; i < k; i++) {
		for (j = 0; j < k; j++) {
			arr[i][j] = rand() % 10 + 1;
		}
		if (i == j) {
			cout << " " << arr[i][j];
		}
	}
}

void fun4(int**& arr, int n, int m) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			arr[i][j] = rand() % 10 + 1;
		}
		if (i == j) {
			cout << " " << arr[i][j];
		}
	}
}