#include<iostream>
using namespace std;

const int MAX=20;
int sumdigitEven(int n){
	if(n == 0) return 0;
	int digit = n % 10;
	return ((digit % 2 == 0) ? digit : 0) + sumdigitEven(n / 10);
}
int sumdigitOld(int n){
	if(n == 0) return 0;
	int digit = n % 10;
	return ((digit % 2 != 0) ? digit : 0) +sumdigitOld(n / 10);
}
int toBin(int n){
	if(n == 0 || n == 1) return n;
	int nhiphan = n % 2;
	return (toBin(n / 2)) * 10 + nhiphan;
}
int ucln(int a,int b){
	if(b == 0) return a;
	return ucln(b,a % b);
}
int tongMang(int a[],int n){
	if(n == 1) return a[0];
	return a[n-1] + tongMang(a,n-1);
}
void nhapMang(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void xuatMang(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int timMinMang(int a[],int n){
	if(n == 1) return a[0];
	int min = timMinMang(a,n-1);
	return (a[n-1] < min)? a[n-1]:min;
}
int tohop(int n,int k){
	if(k==0||n==k) return 1;
	return tohop(n-1,k-1)+tohop(n-1,k);
}
void pascal(int h){
	for(int i=0;i<h;i++){
		for(int j=0;j<=i;j++)
			cout<<tohop(i,j)<<" ";
		cout<<endl;
	}
}
int main(){
	int n;
	cout<<"Nhap so nguyen duong n : ";
	cin>>n;
	
	cout<<"Tong chu so chan cua so nguyen n "<<n<<" : "<<sumdigitEven(n)<<endl;
	cout<<"Tong chu so le cua so nguyen n "<<n<<" : "<<sumdigitOld(n)<<endl;
	cout<<"Doi so nguyen n = "<<n<<" sang nhi phan : "<<toBin(n)<<endl;
	
	int a,b;
	cout<<"Nhap do dai a va b : ";
	cin>>a>>b;
	
	cout<<"UCLN cua [a,b] = "<<ucln(a,b)<<endl;
	
	int pt;
	int arr[MAX];
	cout<<"Nhap so phan tu cho mang : ";
	cin>>pt;
	
	nhapMang(arr,pt);
	cout<<"Tong cac phan tu trong mang : "<<tongMang(arr,pt)<<endl;
	cout<<"Min cua phan tu trong mang : "<<timMinMang(arr,pt)<<endl;
	
	int h;
	cout<<"Nhap h : ";
	cin>>h;
	pascal(h);
	return 0;
}
