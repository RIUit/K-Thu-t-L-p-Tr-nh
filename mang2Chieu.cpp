#include<iostream>
using namespace std;


int main() {
	const int MAX_ROW = 20;
	const int MAX_COL = 10;
	int arr[MAX_ROW][MAX_COL];
	int r, c;

	//Nhap so dong va so cot cua mang 2 chieu
	do {
		cout << "Nhap vao so dong: ";
		cin >> r;
		cout << "Nhap vao so cot: ";
		cin >> c;

		if (r <= 0 || r > MAX_ROW || c <= 0 || c > MAX_COL) {
			cout << "So dong hoac so cot khong hop le. Xin moi nhap lai." << endl;
		}

	} while (r <= 0 || r > MAX_ROW || c <= 0 || c > MAX_COL);

	//Nhap mang 2 chieu
	for (int i = 0; i < r; i++) {

		for (int j = 0; j < c; j++) {
			cout << "Nhap vao phan tu thu [" << i << "][" << j << "] : ";
			cin >> arr[i][j];
		}
	}

	//Tinh tich cac phan tu tren 1 dong
	
		//Nhap dong can tinh tich
	int n;
	do {
	cout << "Nhap so dong de tinh tich : ";
	cin >> n;

	if (n<1 || n>r) {
		cout << "Nhap sai roi ! \n";
	}

	} while (n<1 || n>r);
	
		//Tinh tich
	int tich = 1;
		for (int j = 0; j < c; j++) {
			
			tich *= arr[n-1][j];
		}
		cout << "Tich cac phan tu tren dong " << n << " la: " << tich << endl;
	//Tong cac phan tu tren 1 cot
		// nhap cot
		int cot;
		int tong = 0;
		cout << "Nhap so cot de tinh tong : ";
		cin >> cot;
		//Tinh tong
		for (int i = 0; i < r; i++) {

			tong += arr[i][cot - 1];
		}
		//Xuat tong cua cot 
		cout << "Tong cac phan tu tren cot " << cot << " : " << tong << endl;
		
	//Xuat mang 2 chieu
	for (int i = 0; i < r; i++) {

		for (int j = 0; j < c; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
