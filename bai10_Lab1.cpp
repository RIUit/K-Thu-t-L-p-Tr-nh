//BAI10
#include <iostream>  
using namespace std;


int main() {
    int n;
    cout << "Nhap kich thuoc n (2 <= n <= 10): ";
    cin >> n;

    int matrix[10][10]; // Giả sử tối đa 10x10  
    int value = 1; // Giá trị khởi tạo  

    int left = 0, right = n - 1, top = 0, bottom = n - 1;

    while (value <= n * n) {
        for (int i = left; i <= right; i++) // Đi từ trái sang phải  
            matrix[top][i] = value++;
        top++;

        for (int i = top; i <= bottom; i++) // Đi từ trên xuống dưới  
            matrix[i][right] = value++;
        right--;

        for (int i = right; i >= left; i--) // Đi từ phải sang trái  
            matrix[bottom][i] = value++;
        bottom--;

        for (int i = bottom; i >= top; i--) // Đi từ dưới lên trên  
            matrix[i][left] = value++;
        left++;
    }

    // Xuất ma trận  
    cout << "Ma tran theo dang xoan oc:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}