#include<iostream>
#include<ctime>
using namespace std;

void khoiTao(int *a, int n) {
	for (int i = 0; i < n; i++)
		*(a + i) = rand() % 10;
}
void xuatMang(int*a, int n) {
	for (int i = 0; i < n; i++)
		cout << *(a + i) << " ";
	cout << endl;

}void xuatVTMang(int*a, int n) {
	for (int i = 0; i < n; i++)
		cout << (a + i) << " ";
	cout << endl;

}
int*vt(int*p, int n, int x) {
	if (n == 0)
		return NULL;
	if (*(p + n - 1) == x)
		return p + n - 1;
	return vt(p, n - 1, x);
}
int main() {
	srand(time(0));
	int n;
	cout << "Nhap n : ";
	cin >> n;
	int*a = new int[100];
	khoiTao(a, n);
	xuatMang(a, n);
	xuatVTMang(a, n);
	int x;
	cout << "Nhap so x : ";
	cin >> x;
	cout << vt(a, n, x) << endl;
	xuatMang(a, n);


	system("pause");

	return 0;
}