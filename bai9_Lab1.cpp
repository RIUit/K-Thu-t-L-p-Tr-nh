#include<iostream>
using namespace std;

const int MAX_ROW = 10;
const int MAX_COL = 10;


void nhapMang(int a[MAX_ROW][MAX_COL], int r) {
	int dem = 1;
	for (int j = 0; j < r; j++) {
		if (j % 2 == 0)
			for (int i = 0; i < r; i++) {
				a[i][j] = dem++;
			}
		else
			for (int i = r - 1; i >= 0; i--)
				a[i][j] = dem++;
	}
}
void xuatMang(int a[MAX_ROW][MAX_COL],int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

int main() {
	int n = 4;
	int a[MAX_ROW][MAX_COL];
	nhapMang(a, n);
	xuatMang(a, n);


	system("pause");

	return 0;
}