#include<iostream>
using namespace std;;

int main() {
	int x=10, y;
	int* ptr;
	ptr = &x;
	*ptr = 80;
	cout << "Dia chi cua x : " << &x << endl;
	cout << "Dia chi cua ptr : " << &ptr << endl;
	cout << "Gia tri cua bien ma ptr tro den : " << *ptr << endl;
	cout << x << endl;
	return 0;
}