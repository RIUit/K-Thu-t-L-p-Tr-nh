/*	Viết hàm đệ qui để chuyển 1 số nguyên dương từ hệ thập phân sang
	nhị phân. Sau đó viết chương trình để kiểm tra hàm đã viết.*/
#include<iostream>
using namespace std;



int decToBin(int n) {
	if (n == 0)
		return 0;
	return n % 2 + 10 * decToBin(n / 2);
}
int main() {
	int n;

	cin >> n;

	cout << decToBin(n) << endl;

	system("pause");

	return 0;
}