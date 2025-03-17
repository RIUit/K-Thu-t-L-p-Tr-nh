#include<iostream>
#include<ctime>
using namespace std;

void fibo(int*p, int n) {
	if (n > 0)
		p[0] = 0;
	if (n > 1)
		p[1] = 1;
	for (int i = 2; i < n; i++) {
		p[i] = p[i - 1] + p[i - 2];
	}
}
void xuatMang(int*p, int n) {
	for (int i = 0; i < n; i++)
		cout << *(p + i) << " ";
	cout << endl;

}
int main() {
	int n;
	cout << "Nhap n : ";
	cin >> n;
	int*a = new int[100];
	fibo(a, n);
	xuatMang(a, n);

	delete[]a;
	system("pause");

	return 0;
}