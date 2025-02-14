/*	Viết 01 chương trình thực hiện toàn bộ các công việc sau:
		a. Khai báo một mảng số nguyên gồm 3 hàng và 4 cột.
		b. Khởi tạo giá trị của mảng vừa nhập lần lượt như sau:
							8 4 -1 5
							2 2 6 9
							11 2 5 4

		c. Xuất lại toàn bộ mảng đang lưu trữ để kiểm chứng*/
#include<iostream>
#include<iomanip>
using namespace std;


int main() {
	const int MAX_R = 3, MAX_C = 4;

	int arr[MAX_R][MAX_C] = { {8,4,-1,5},{2,2,6,9},{11,2,5,4} };
	
	for (int i = 0; i < MAX_R; i++) {

		for (int j = 0; j < MAX_C; j++) {

			//OUTPUT:Xuat du lieu dang luu ( setw:độ rộng ; setfill:lấp đầy )
			cout << setw(3) << setfill(' ') << arr[i][j];
		}
		cout << endl;
	}

	system("pause");

	return 0;
}