#include<iostream>
using namespace std;

double luythua(int x,int n){
	if(n == 0) return 1;
	if(n < 0) return 1.0 / luythua(x,-n);
	return x * luythua(x,n - 1);
}
int demChuSo(int n){
	if(n < 10) return 1;
	return 1 + demChuSo(n / 10);
}
int daonguoc(int n,int sdn = 0){
	if(n == 0) return sdn;
	return daonguoc(n / 10,sdn * 10 + (n % 10));
}
int main(){
	int x,n;
	cout << "Nhap x va n : ";
	cin >> x >> n;
	
	cout << "Luy thua " << x << " mu " <<n << " : " << luythua(x,n) << endl;	
	int y;
	cout << "Nhap so nguyen y : "; cin >> y;
	cout << "Dem chu so cua so nguyen " << y << " : "  << demChuSo(y) << endl;
	cout << "Dao chu so cua so nguyen " << y << " : "  << daonguoc(y) << endl;
	return 0;
}
