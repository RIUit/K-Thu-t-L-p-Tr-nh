//Bai 3:Viet chuong trinh theo tung yeu cau sau :
#include<iostream>
using namespace std;


int main() {

	const int MAX_R = 10, MAX_C = 15;
	int arr[MAX_R][MAX_C];
	int r, c;
	int min = INT_MAX;
	int max = INT_MIN;
	int rmax, cmax, rmin, cmin;
/*Cho phép người dùng nhập vào một mảng số nguyên gồm r hàng và c cột (tối đa 10
  hàng và 15 cột, nếu nhập sai thì yêu cầu nhập lại cho đến khi đúng mới tiếp tục).	*/

	//Dieu kien can
	do {

	cout << "Nhap vao so hang va so cot cua mang : ";
	cin >> r >> c;

	if (r > 10 && r < 0 && c>15 && c < 0) {
		cout << "Nhap sai ! Nhap lai !\n";
	}

	} while (r > 10 && r < 0 && c>15 && c < 0);
	//Nhap vao mang cac phan tu
	for (int i = 0; i < r; i++) {

		for (int j = 0; j < c; j++) {

			cout << "Nhap a[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> arr[i][j];
		}
		cout << endl;
	}

	//b. Thực hiện việc tính tổng các giá trị lưu trữ trong mảng.
	int tong = 0;
	for (int i = 0; i < r; i++) {

		for (int j = 0; j < c; j++) {

			tong += arr[i][j];

			//c.Tìm giá trị nhỏ nhất, lớn nhất đang lưu trữ trong mảng.
			if (min > arr[i][j]) {
				min = arr[i][j];
				//d.Cho biết vị trí của giá trị nhỏ nhất hay lớn nhất ở hàng mấy?
				rmin = i;
				cmin = j;
			}
			if (max<arr[i][j]) {
				max = arr[i][j];
				rmax = i;
				cmax = j;
			}
		}
		cout << endl;
	}

	cout << "Tong cac gia tri trong mang : " << tong << endl;

	cout << "Gia tri nho nhat : " << min << " o hang " << rmin << " cot " << cmin << endl;

	cout << "Gia tri lon nhat : " << max << " o hang " << rmax << " cot " << cmax << endl;
	system("pause");

	return 0;
}