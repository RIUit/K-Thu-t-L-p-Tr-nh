#include<iostream>
using namespace std;

int ucln(int a, int b) {
	if (b == 0) return a;
	return ucln(b, a%b);
}
int main() {
	int x, y;
	cout << "Nhap x va y : ";
	cin >> x >> y;

	int*p = new int;
	int*q = new int;
	p = &x;
	q = &y;
	cout <<"UCLN cua "<<*p<<" va "<<*q<<" : "<< ucln(*p, *q) << endl;


	p = NULL;
	q = NULL;
	delete p;
	delete q;
	system("pause");

	return 0;
}