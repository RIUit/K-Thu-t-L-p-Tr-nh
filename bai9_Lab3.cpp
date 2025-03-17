#include<iostream>
#include<cmath>
using namespace std;


void khoiTao(int**&p,int r,int c){
	p=new int*[r];
	for(int i=0;i<r;i++)
		p[i]=new int[c];
}
void nhapMang(int**p,int r,int c){
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++){
			cout<<"p["<<i<<"]["<<j<<"] = ";
			cin>>p[i][j];
		}
}
void giaiPhong(int**p,int r,int c){
	for(int i=0;i<r;i++)
		delete[] p[i];
	delete[]p;
}
void xuatMang(int**p,int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}
}
bool isNguyenTo(int n){
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return true;
}	
int tinhTong(int**p,int r,int c){
	int tong=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(isNguyenTo(*(*(p + i) + j)))
				tong+=p[i][j];
		}	
	}
	return tong;
}		
void xuatNguyenTo(int**p,int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(isNguyenTo(*(*(p + i) + j)))
				cout<<*(*(p+i)+j)<<" ";
		}	
	}
}		
int main(){
	int r,c;
	cout<<"Nhap r va c : ";
	cin>>r>>c;
	
	int**p;
	khoiTao(p,r,c);
	nhapMang(p,r,c);
	xuatMang(p,r,c);
	cout<<"Tong cac so nguyen to : "<<tinhTong(p,r,c)<<endl;
	cout<<"Xuat so nguyen to : ";
	xuatNguyenTo(p,r,c);
	
	giaiPhong(p,r,c);
	
	
	
	return 0;
}
