/*Viết chương trình dùng câu lệnh while để nhập và xuất giá trị cho một mảng số nguyên
  gồm 4 hàng và 3 cột.

  Gợi ý: dựa trên tính chất câu lệnh while và for để xây dựng lại phần nhập và xuất mảng 2
  chiều.			*/
#include<iostream>
using namespace std;


int main() {
	const int MAX_R = 4, MAX_C = 3;

	int arr[MAX_R][MAX_C];

	//Nhap gia tri cua mang 
	int i = 0;

	while (i < MAX_R) {
		int j = 0;
		while (j < MAX_C) {
			cout << "Nhap vao mang a[ " << i + 1 << " ] [ "<<j + 1 << " ] : ";
			cin >> arr[i][j];
			j++;
		}
		i++;
		
	}

	//Xuat gia tri cua mang
	i = 0;
	while (i < MAX_R) {

		int j = 0;

		while (j < MAX_C) {
			cout << arr[i][j] << " ";
			j++;
		}
		i++;
		cout << endl;
	}


	system("pause");

	return 0;
}