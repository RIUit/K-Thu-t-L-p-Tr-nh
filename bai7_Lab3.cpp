#include<iostream>
using namespace std;


int* isTonTai(int *a, int n, int x) {
	for (int i = 0; i < n; i++) {
		if (*(a + i) == x) {
			return (a + i);
		}
	}
	return NULL;
}
void nhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);
	}
}
void xuatMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << " " << a + i << endl;
	}
}
int main() {
	int n;
	cout << "Nhap phan tu : ";
	cin >> n;

	int* a = new int[n];
	nhapMang(a, n);
	
	int x;
	cout << "Nhap so can kim : ";
	cin >> x;
	int* p = isTonTai(a, n, x);
	
	cout << "Vi tri cua so " << x << " tim duoc tai " << p << endl;

	xuatMang(a, n);

	return 0;
}