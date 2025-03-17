#include<iostream>
using namespace std;


int main() {
	int x, y;
	int*p = &x;
	*p = 80;
	cout << "Dia chi cua x : " << &x << endl;
	cout << "Dia chi cua con tro p : " << &p << endl;
	cout << "Gia tri cua con tro p : " << *p << endl;
	cout << "Gia tri cua x : " << x << endl;
	system("pause");

	p = NULL;
	delete p;
	return 0;
}