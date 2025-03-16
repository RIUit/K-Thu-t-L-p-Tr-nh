#include<iostream>
using namespace std;



void nhapMang(int *a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);
	}
}
void xuatMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << " ";
	}
}
void daoMang(int* a, int n) {
	/*int* p = new int[n];
	for (int i = n-1,j = 0; i >=0; i--,j++) {
		*(p + j) = *(a + i);
	}*/
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		int tam = a[i];
		a[i] = a[j];
		a[j] = tam;
	}
}
int main() {
	int n;
	cin >> n;
	
	int* a = new int[n];
	nhapMang(a, n);
	
	daoMang(a, n);

	xuatMang(a, n);

	delete[]a;
	/*delete[]dao;*/

	return 0;
}