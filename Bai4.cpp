#include<iostream>
using namespace std;

int main() {
	const int MAX_R = 5, MAX_C = 6;
	int arr[MAX_R][MAX_C];
	int r, c;

	//a.Nhap so hang va so cot (co dieu kien)
	do {

		cout << "Nhap vao so hang va so cot : ";
		cin >> r >> c;

		if (r<0 || c<0 || r>MAX_R || c>MAX_C) {
			cout << "Nhap sai!Nhap lai di ! \n";
		}

	} while (r<0 || c<0 || r>MAX_R || c>MAX_C);

	//a.Nhap vao cac phan tu vao mang
	for (int i = 0; i < r; i++) {

		for (int j = 0; j < c; j++) {
			cout << "a[" << i  << "][" << j << "] : ";
			cin >> arr[i][j];
		}
		cout << endl;
	}

	//b.Cho người dùng nhập vào một vị trí cột/hàng cần tính tổng
	int chon;

	cout << "Nhap\n 1.Tinh tong theo vi tri hang\n 2.Tinh tong theo vi tri cot ";
	cin >> chon;

	system("cls");
	cout << endl;

	//Su lua chon nguoi nhap vao

	switch (chon!=0)
	{
		//Lua chon muon :Tinh tong theo hang
	case 1: {
		int tong = 0;
		int vtr;
		//Nhap vtri tinh hang
		cout << "		TINH TONG THEO VI TRI HANG  " << endl;
		cout << "		Nhap vi tri hang can tinh tong : ";
		cin >> vtr;
		
		//Tinh tong tren hang
			for (int j = 0; j < c; j++) {
				tong += arr[vtr-1][j];
			}
		//Output:tong cac phan tu tren hang
			cout << "		Tong cac phan tu tren hang " << vtr  << "   : " << tong << endl;
			break;
	}
		 //Lua chon muon :Tinh tong theo cot
	case 2: {
		int tong = 0;
		int vtr;
		//Nhap vtri tinh hang
		cout << "		TINH TONG THEO VI TRI COT  " << endl;
		cout << "		Nhap vi tri cot can tinh tong : ";
		cin >> vtr;

		//Tinh tong tren cot
		for (int i = 0; i < r; i++) {
			tong += arr[i][vtr - 1];
		}
		//Output:tong cac phan tu tren hang
		cout << "		Tong cac phan tu tren cot " << vtr  << " : " << tong << endl;
		break;
	}
	default:
		cout << "Chuc nag chua phat chuyen !\n";
		break;
	}
	cout << "===============================================================================" << endl;
	

	/*c.Input: x bất kỳ.Tìm xem x có tồn tại trong mảng hay không ?
	 Nếu có thì tồn tại bao nhiêu lần ? Tại các vị trí nào ?	*/

	int x,dem=0;

	//Nhap vao gia tri x bat ky
	cout << "		Nhap vao gia tri bat ky : ";
	cin >> x;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (x == arr[i][j]) {
				dem++;
				cout <<"	Gia tri nhap vao la " << x << " ton tai tai vi tri a[" << i << "][" << j << "] " << endl;
			}
			
		}
	}

	if (dem == 0) {
		cout << "		Khong ton tai gia tri cua " << x << " trong mang !" << endl;
	}
	cout << endl;

	system("pause");

	return 0;
}