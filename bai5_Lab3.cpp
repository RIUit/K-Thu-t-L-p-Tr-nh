#include<iostream>
using namespace std;


int* fibo(int n) {
	if (n < 2) return 0;

	int* a = new int[n];//tao mang dong
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i < n; i++) {
		a[i] = a[i - 1] + a[i - 2];// erro : *(a + i) = *(a - 1) + *(a - 2) la la truy xuat theo o nho tai a-1 la a[0]-1 vi ngay tu dau int* a la dang truy xuat phan tu dau r
	}
	return a;
}
void xuatMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << " ";
	}
}
int main() {
	int n;
	cin >> n;

	int* fi = fibo(n);//Tao bien con tro tro den ham
	xuatMang(fi, n);

	delete[]fi;
	return 0;
}