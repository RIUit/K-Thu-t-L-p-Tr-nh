#include<iostream>
#include<cmath>
using namespace std;


void nhapMang(int*a,int n){
	if(n == 0) return;
	cin>>*a;
	nhapMang(a+1,n-1);
}
void xuatMang(int*a,int n){
	if(n == 0) return;
	cout<<*a<<" ";
	xuatMang(a+1,n-1);
}
int*maxPT(int*a,int n){
	if(n == 1) return a;
	return (*a > *maxPT(a+1,n-1) )? a : maxPT(a+1,n-1); 
}
int*minPT(int*a,int n){
	if(n == 1) return a;
	return (*a < *minPT(a+1,n-1) )? a : minPT(a+1,n-1); 
}
void daoNguoc(int*p,int l,int r){
	if(l>=r) return;
	swap(p[l],p[r]);
	daoNguoc(p,l+1,r-1);
}
void toHex(int n,string &hex){
	char bang[]="0123456789ABCDEF";
	if(n<16){
		hex+=bang[n];
		return;
	}
	toHex(n/16,hex);
	hex+=bang[n%16];
}
int hexToDec(string hex,int doDai =0){
	if(doDai == hex.length()) return 0;
	char kt = hex[doDai];
	int thapphan;
	if(kt>='0'&&kt<='9')
		thapphan=kt-'0';
	else if(kt>='A'&&kt<='F')
		thapphan=kt-'A'+10;
	return thapphan*pow(16,doDai)+hexToDec(hex,doDai+1);	
}
int main(){
	int n;
	
	cout<<"Nhap so nguyen duong : ";
	cin>>n;
	int*a=new int [n];
	
	nhapMang(a,n);
	
	cout<<"Mang sau khi nhap \n";
	xuatMang(a,n);
	cout<<endl;
	
	cout<<"Pt lon nhat cua mang: "<<*maxPT(a,n)<<endl;
	cout<<"Pt nho nhat cua mang: "<<*minPT(a,n)<<endl;
	cout<<"Dao nguoc mang: "<<endl;
	daoNguoc(a,0,n-1);
	xuatMang(a,n);
	cout<<endl;
	 
	string s=""; //Khai bao rong
	int x;
	cout<<"Nhap so thap phan can chuyen sang he 16 : ";
	cin>>x;
	if(x == 0)
		cout<<"0";
	else{
		
		toHex(x,s);
		cout<<"So thap phan da chuyen sang he 16 : "<<s<<endl;	
	}
	
	cout<<"So thap luc phan "<<s<<" doi ve thap phan : "<<hexToDec(s)<<endl;
	return 0;
}
