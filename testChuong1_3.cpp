#include<iostream>
#include<cmath>
using namespace std;


//ham nhap mang de quy	
void nhap(int*a,int n){
	if(n==0) return;// ham void moi dung dc return;nghia cua cau lenh la if n == 0 thi dung lai
	cout<<"Nhap phan tu ";
	cin>>*a;
	nhap(a+1,n-1);
}
//ham xuat mang de quy
void xuat(int*a,int n){
	if(n==0) return; // khi lan dau khai bao int * p de bt day la con tro va ke ve sau dung *p mang y nghia lay gia tri(int) do khai bao int*p
	cout<<*a<<" ";
	xuat(a+1,n-1);	// khi lan dau khai bao int*p thi p la mang nghia dia chi khai bao p no tro den phan tu &a (a la gia tri int thi & bien a thanh dia chi de <=> dia chi p = dia chi a  
}
//Ham tim gia tri va vi tri max cua mang de quy
int*maxMang(int*p,int n){
	if(n==1) return p;
	return (*p > *maxMang(p+1,n-1))? p : maxMang(p+1,n-1);//*p>*max..gia tri p > gia tri max.. true:p tro den pt max la *p
}
//Ham tim gia tri va vi tri min cua mang de quy
int*minMang(int*p,int n){
	if(n==1) return p;
	return (*p < *minMang(p+1,n-1))? p : minMang(p+1,n-1);
}
//Ham dao nguoc mang de quy
void daoNguoc(int*p,int l,int r){
	if(l>=r) return;
	swap(p[l],p[r]);
	return  daoNguoc(p,l+1,r-1);
}
//Ham chuyen doi so thap phan sang so thap luc phan de quy
void toHex(int n,string &hex){
	char bang[] ="0123456789ABCDEF";
	if(n<16){
		hex+=bang[n%16];
		return;
	}
	toHex(n/16,hex);
	hex+=bang[n%16]; 
}
//Ham chuyen doi he so luc phan sang he thap phan de quy
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
