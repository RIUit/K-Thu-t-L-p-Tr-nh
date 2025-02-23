#include<iostream>
using namespace std;


int fibonaci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1 || n == 2)
		return 1;
	return (fibonaci(n - 1) + fibonaci(n - 2));
}
int main() {
	int n;

	cout << "Nhap n : ";
	cin >> n;

	cout << fibonaci(n) << endl;


	system("pause");

	return 0;
}