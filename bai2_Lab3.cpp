#include<iostream>
#include<time.h>
using namespace std;

const int MAX = 30;


void randomMang(int a[],int n) {
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 10 ;
	}
}
void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout <<*(a+i)<<" ";
	}
}
int main() {
	srand(time(0));
	int a[MAX];
	int n;
	int* p = a;

	cout << "Nhap so phan tu mang : ";
	cin >> n;
	randomMang(a, n);

	for (int i = 0; i < n; i++) {
		cout << *(a + i) << " co dia chi : " << a + i << endl;//Tem mang va ki phap do doi
	}
	for (int i = 0; i < n; i++) {
		cout << "a [" << i << "] = " << p[i] << endl;//Ten mang va ki phap chi so
	}
	xuatMang(a, n);

	return 0;
}