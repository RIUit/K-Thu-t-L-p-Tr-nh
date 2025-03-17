#include<iostream>
#include<ctime>
using namespace std;

void khoiTao(int *a,int n) {
	for (int i = 0; i < n; i++)
		*(a + i) = rand() % 100;
}
void xuatMang(int*a,int n) {
	for (int i = 0; i < n; i++)
		cout << *(a + i) << " ";
	cout << endl;

}
void xuatVT(int*a, int n) {
	for (int i = 0; i < n; i++)
		cout << (a + i) << " ";
	cout << endl;

}
void xuatMangLe(int *a, int n) {
	for (int i = 0; i < n; i++)
		if (*(a + i) % 2 != 0)
			cout << *(a + i) << " ";
	cout << endl;

}
int*timMax(int *a, int n) {
	int *max = a;
	for (int i = 0; i < n; i++) {
		if (*(a + i) > *max)
			max = (a + i);
	}
	return max;
}
int main() {
	srand(time(0));
	int n;
	int*a = new int[30];
	cout << "Nhap so phan tu trong mang : ";
	cin >> n;
	khoiTao(a,n);
	cout << "Cac phan tu trong mang : \n";
	xuatMang(a,n);
	cout << "Dia chi cua phan tu mang : \n";
	xuatVT(a, n);
	cout << "Cac phan tu le trong mang : \n";
	xuatMangLe(a, n);

	cout << "Vi tri phan tu max : " << timMax(a, n) << endl;

	
	delete[] a;
	system("pause");

	return 0;
}