/*	Viết hàm đệ qui để đếm số chữ số của 1 số nguyên dương. Sau đó
	viết chương trình để kiểm tra hàm vừa viết						*/
#include<iostream>
using namespace std;


int demSoNguyen(int n) {
	if (n / 10 == 0)
		return 1;
	return 1 + demSoNguyen(n / 10);
}
int main() {
	int n;

	cin >> n;

	cout << demSoNguyen(n) << endl;
	system("pause");

	return 0;
}