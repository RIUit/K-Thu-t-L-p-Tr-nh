#include<iostream>
#include<ctime>
using namespace std;

void khoiTao(int*a) {
	for (int i = 0; i < 30; i++) 
		a[i] = rand() % 10;
	cout << endl;
}
void xuatMang(int*a) {
	for (int i = 0; i < 30; i++)
		cout << *(a + i) << " ";
	cout << endl;

}
void xuatMang1(int*a) {
	for (int i = 0; i < 30; i++)
		cout << a[i] << " ";
	cout << endl;

}
int main() {
	srand(time(NULL));
	int a[30];

	khoiTao(a);
	int*p = a;
	xuatMang(a);

	xuatMang1(a);



	p = NULL;
	delete p;
	system("pause");

	return 0;
}