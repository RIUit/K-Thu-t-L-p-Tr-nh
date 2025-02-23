/*	Ví dụ: Viết hàm đệ qui tính tổng các số từ 1 đến n (n là số
	nguyên dương)												*/
#include<iostream>
using namespace std;


int tinhTong(int n){
	if (n == 1)
		return 1;
	else
		return n + tinhTong(n - 1);

}
int main() {
	int n;

	cout << "Nhap n  : ";
	cin >> n;

	cout << tinhTong(n) << endl;
	system("pause");

	return 0;
}