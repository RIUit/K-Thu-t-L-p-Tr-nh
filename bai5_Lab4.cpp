#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
using namespace std;


int main() {
	int dem = 0;
	char*p = new char[11];
	do
	{
		cout << "Nhap mat khau : ";
		int i;
		for (i = 0; i < 10; i++) {
			char ch = _getch();
			if (ch == '\n')
				break;
			p[i] = ch;
			cout << "X ";
		}
		p[i] = '\0';
		if (strcmp(p, "SinhVienCQ") != 0) {
			cout << "Nhap sai!Nhap lai!\n";
			dem++;
		}
		else
			cout << "\nDang nhap thanh cong ! \n";
	} while (strcmp(p, "SinhVienCQ") != 0 && dem < 3);


	delete[]p;
	system("pause");
	return 0;
}
