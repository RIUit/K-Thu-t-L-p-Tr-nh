#include<iostream>
using namespace std;


const int MAX = 30;
void nhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);
	}
}
void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << " : " << a + i << endl;
	}
}
void phanTuLe(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (*(a+i) % 2 != 0) {
			cout << *(a+i) << " ";
		}
	}
}
int* timMax(int* a, int n) {
	int* p = a;	//con tro chi den phan tu dau tien cua mang
	for (int i = 0; i < n; i++) {
		if (*(a + i) > *p) {	// a[i]>p[i]
			p = a + i;
		}
	}
	return p;
}
int main() {
	int n;
	srand(time(0));
	do {
		cout << "Nhap so phan tu mang : ";
		cin >> n;
		if (n > 30 || n < 0)
			cout << "Nhap sai gia tri n thuoc doan 1 den 30 !\n";
	} while (n > 30);

	int* a;
	a = new int[n];

	nhapMang(a, n);
	cout << endl;

	cout << "Cac phan tu le trong mang \n";
	phanTuLe(a, n);
	cout << endl;

	cout << "Tim dia chi max cua phan tu trong mang \n";
	int* tim = timMax(a, n);
	cout << "Max phan tu bang " << *tim << " co dia chi : " << tim << endl;

	cout << "Mang ban nhap co : " << endl;
	xuatMang(a, n);
	
	delete[] a;
	return 0;
}