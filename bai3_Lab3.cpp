#include<iostream>
using namespace std;


int ucln(int a, int b) {
	if (b == 0) return a;

	while (b != 0) {
		int tam = b;
		b = a % b;
		a = tam;
	}

	return a;
}
int main() {
	int* p1 = new int;
	int* p2 = new int;

	cin >> *p1 >> *p2;

	cout << "UCLN cua " << *p1 << " va " << *p2 << " : " << ucln(*p1, *p2) << endl;

	delete p1;
	delete p2;
	return 0;
}