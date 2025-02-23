#include<iostream>
using namespace std;


int giaThua(int n) {
	if (n == 0)
		return 1;
	else
		return n * giaThua(n - 1);
}
int main() {
	int n;

	cout << "Nhap n : ";
	cin >> n;

	cout << giaThua(n) << endl;

	system("pause");

	return 0;

}