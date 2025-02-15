/*Viết chương trình cho nhập vào một ma trận vuông cấp n (chứa các số nguyên). Sau đó
tính tổng các giá trị trên đường chéo chính và đường chéo phụ của ma trận vừa nhập.
							1	4	0
						A=	8  15	3
							6	9	2
	(*)Thì tổng các giá trị trên đường chéo chính là = 1 + 15 + 2 = 18, tổng các giá trị trên
	   đường chéo phụ là = 6 + 15 + 0 = 21.
*/
#include<iostream>
using namespace std;

int main() {
	int a[3][3];

	//Nhap vao gia tri cua ma tran
	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {
			cout << "Nhap a["<<i << "][" << j << "]:";
			cin >> a[i][j];
		}
	}

	//Processing: Tinh tong gia tri tren duong cheo chinh va phu
	int tongchinh = 0;
	int tongphu = 0;
	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {
			if (i == j) {
				tongchinh += a[i][j];
			}
			if (i + j == 2) {
				tongphu += a[i][j];
			}
		}
	}
	cout << "Tong gia tri tren duong cheo chinh : " << tongchinh << endl;
	cout << "Tong gia tri tren duong cheo phu : " << tongphu << endl;


	system("pause");
	return 0;
}