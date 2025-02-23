/*	Viết hàm đệ qui để tính tổng S(n)=1^2 + 2^2 + 3^2+....n^2
	với n là số nguyên dương. Sau đó viết chương trình để kiểm tra hàm vừa viết.			*/
#include<iostream>
#include<cmath>
using namespace std;


int tinhTong(int n) {
	if (n == 1)
		return 1;
	else
		return pow(n, 2) + tinhTong(n - 1);
}
int main() {
	int n;

	cin >> n;

	cout << tinhTong(n) << endl;


	system("pause");

	return 0;
}