/*	Viết hàm đệ qui để tính số đảo ngược của 1 số nguyên dương. Sau
	đó viết chương trình để kiểm tra hàm vừa viết					*/
#include<iostream>
using namespace std;


int tinhSDN(int n, int res = 0) {
	if (n == 0)
		return res;
	return tinhSDN(n / 10, res * 10 + n % 10);
}  
int main() {
	int n;

	cin >> n;

	cout << tinhSDN(n) << endl;


	system("pause");

	return 0;
}