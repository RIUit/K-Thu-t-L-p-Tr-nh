#include<iostream>
#include<cmath>
using namespace std;


	
void nhap(int*a,int n){
	if(n==0) return;
	cout<<"Nhap phan tu ";
	cin>>*a;
	nhap(a+1,n-1);
}
void xuat(int*a,int n){
	if(n==0) return;
	cout<<*a<<" ";
	xuat(a+1,n-1);
}
int*maxMang(int*p,int n){
	if(n==1) return p;
	return (*p > *maxMang(p+1,n-1))? p : maxMang(p+1,n-1);
}
int*minMang(int*p,int n){
	if(n==1) return p;
	return (*p < *minMang(p+1,n-1))? p : minMang(p+1,n-1);
}
void daoNguoc(int*p,int l,int r){
	if(l>=r) return;
	swap(p[l],p[r]);
	return  daoNguoc(p,l+1,r-1);
}
void toHex(int n,string &hex){
	char bang[] ="0123456789ABCDEF";
	if(n<16){
		hex+=bang[n%16];
		return;
	}
	toHex(n/16,hex);
	hex+=bang[n%16]; 
}
int hexToDec(string hex,int dodai=0){  // 3E3
	if(dodai == hex.length()) return 0;
	char kt=hex[dodai];
	int tp;
	if(kt>='0'&&kt<='9')
		tp=kt-'0';
	else if(kt>='A'&&kt<='F')
		tp=kt-'A'+10;
	return tp*pow(16,hex.length()-1-dodai) + hexToDec(hex,dodai+1);
}
int main(){
	int n;
	cout<<"Nhap so nguyen duong n : ";
	cin>>n;
	
	int*a=new int[n];
	
	nhap(a,n);
	xuat(a,n);
	cout<<endl;
	
	cout<<"Dao nguoc mang \n";
	daoNguoc(a,0,n-1);
	xuat(a,n);
	cout<<endl;
	
	cout<<"Max pt mang : "<<*maxMang(a,n)<<endl;
	cout<<"Min pt mang : "<<*minMang(a,n)<<endl;
	cout<<"Vi tri Min pt mang : "<<minMang(a,n)<<endl;
	
	int sothapphan;
	string s="";
	cout<<"Nhap so thap phan : ";
	cin>>sothapphan;
	
	if(sothapphan == 0)
		cout<<"0";
	else{
		toHex(sothapphan,s);
		cout<<"So Hex cua so "<<sothapphan<<" : "<<s<<endl;
	}
	cout<<"Doi "<<s<<" sang hex : "<<hexToDec(s)<<endl;
	delete []a;
	return 0;
}
