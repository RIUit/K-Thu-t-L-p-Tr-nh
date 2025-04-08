#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

const int MAX=10;
void khoiTao(int a[MAX][MAX],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j]=-10+rand()%61;//rand()%20
		}
	}
}
void xuatMang(int a[MAX][MAX],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int demSoDuong(int a[MAX][MAX],int r,int c){
	int dem=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]>=0)
				dem++;
		}
	}
	return dem;
}
int demSoAm(int a[MAX][MAX],int r,int c){
	int dem=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]<0)
				dem++;
		}
	}
	return dem;
}
bool isNguyenTo(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int demNguyenToMang(int a[MAX][MAX],int r ,int c){
	int dem=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			if(isNguyenTo(a[i][j])) 
				dem++;
	}

	return dem;
}
int isHoanThien(int n){
	if(n<2) return false;
	int sum=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(i!=n/i)
				sum+=i+n/i;
			else sum+=i;
		}		
	}
	if(sum==n) return 1;
	return false; 
}
bool isChinhPhuong(int n){
	if(n<0) return false;
	int can=sqrt(n);
	return (can*can==n);
}
int demSoCP(int a[MAX][MAX],int r,int c){
	int dem=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(isChinhPhuong(a[i][j])){
				cout<<a[i][j]<<" ";
				dem++;
			}
				
		}
	}
	return dem;
}
int demSoHT(int a[MAX][MAX],int r,int c){
	int dem=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(isHoanThien(a[i][j])){
				dem++;
			}
				
		}
	}
	return dem;
}
int main(){
	int n;
	srand(time(0));
	cout<<"Nhap so phan tu mang : ";
	cin>>n;
	
	int a[MAX][MAX];
	khoiTao(a,n,n);
	
	xuatMang(a,n,n);
	
	cout<<"Dem so duong : "<<demSoDuong(a,n,n)<<endl;
	cout<<"Dem so am : "<<demSoAm(a,n,n)<<endl;
	cout<<"Dem so nguyen to co trong mang : "<<demNguyenToMang(a,n,n)<<endl;
	cout<<"Dem so hoan thien co trong mang : "<<demSoHT(a,n,n)<<endl;
	cout<<"Dem so chinh phuong co trong mang : "<<demSoCP(a,n,n)<<endl;
	return 0;
}
