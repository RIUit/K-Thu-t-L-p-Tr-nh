#include<iostream>
using namespace std;


int tongN(int n){
	if(n == 1) return 1;
	return n + tongN(n - 1);
}
int tongNB(int n){
	if(n == 1) return 1;
	return n * n + tongNB(n - 1);
}
double tongTPL(int n){
	if(n == 1) return 1.0;
	return 1.0 / n + tongTPL(n - 2);
}
int giaithua(int n){
	if(n == 0) return 1;
	return n * giaithua(n - 1);
}
int tongGiaiThua(int n){
	if(n == 1) return 1;
	return giaithua(n) + tongGiaiThua(n-1);
}
int main(){
	int n;
	cout<<"==========Tinh cac tong bang de quy==========\n";
	cout<<"Nhap so nguyen duong : ";
	cin>>n;
	
	cout<<"Tong cac so nguyen toi "<<n<<" 			  : "<<tongN(n)<<endl;
	cout<<"Tong cac so nguyen binh phuong toi "<<n<<" 		  : "<<tongNB(n)<<endl;
	int tam=n;
	if(n % 2 == 0) tam--;
	cout<<"Tong cac thap phan le toi "<<n<<"			  : "<<tongTPL(tam)<<endl;
	cout<<"Tong cac giai thua  toi "<<n<<" 		  	  : "<<tongGiaiThua(n)<<endl;
	return 0;
}
