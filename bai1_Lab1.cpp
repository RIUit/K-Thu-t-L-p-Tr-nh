#include<iostream>
#include<cmath>
using namespace std;


int tong1(int n){
	if(n==1) return 1;
	return n+tong1(n-1);
}
int tong2(int n){
	if(n==1) return 1;
	return n*n + tong2(n-1);
}
double tong3(int n){			//Luu y : Kieu ham gi return dung kieu do
	if(n==1) return 1.0;			//Nen va nen n vao mac dinh la le,co the kiem tra chan o int main()
	return 1.0/n +tong3(n-2);
}
int tinhGiaiThua(int n){
	if(n==0) return 1;
	return n*tinhGiaiThua(n-1);
}
int tong4(int n){//Tong cac giai thua 
	if(n==1) return 1;
	return tinhGiaiThua(n)+tong4(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<"Tong so nguyen toi n : "<<tong1(n)<<endl;
	cout<<"Tong cac phan tu n*n : "<<tong2(n)<<endl;
	int tam=n;
	if(tam%2==0) tam--;
	cout<<"Tong 1/n le : "<<tong3(tam)<<endl;
	cout<<"Tong cac giai thua : "<<tong4(n)<<endl;
	
	
	return 0;
}
