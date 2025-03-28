#include<iostream>
using namespace std;


void nhapMang(int*a,int n){
	if(n==0) return;
	cout<<"Nhap phan tu cho mang :";
	cin>>*a;
	nhapMang(a+1,n-1);
}
void xuatMang(int*a,int n){
	if(n==0) return;
	cout<<*a<<" ";
	xuatMang(a+1,n-1);
}
int maxMang(int*a,int n){
	if(n == 1) return *a;
	int max=maxMang(a+1,n-1);
	return (*a > max)? *a : max ;
}
int minMang(int*a,int n){
	if(n == 1) return *a;
	int min=minMang(a+1,n-1);
	return (*a < min)? *a : min ;
}
int*vtMin(int*a,int n){
	if(n == 1) return a;
	int*min1=vtMin(a+1,n-1);
	return (*a < *min1) ? a : min1;
}
void daoMang(int*a,int l,int r){
	if(l>=r) return;
	swap(a[l],a[r]);
	daoMang(a,l+1,r-1); //da void roi thi return o day nua may ko chay
}
//char arr[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
//void toHex(int n){
//	if(n == 0) return;
//	toHex(n/16);
//	cout << arr[n%16];
//}
void toHex(int n,string &hex){
	char banghe16 []="0123456789ABCDEF";
	if(n<16){
		hex+=banghe16[n];
		return;
	}
	toHex(n/16,hex);
	hex+=banghe16[n%16];

} 
int main(){
	int n;
	
	cout<<"Nhap n : ";
	cin>>n;
	
	int *a=new int [n];
	
	nhapMang(a,n);
	
	xuatMang(a,n);
	cout<<endl;
	
	cout<<"Max cua phan tu trong mang : "<<maxMang(a,n)<<endl;
	
	cout<<"Min cua phan tu trong mang : "<<minMang(a,n)<<endl;
	
	cout<<"Vi tri Min cua phan tu trong mang : "<<vtMin(a,n)<<endl;
	
	cout<<"Mang sau khi dao nguoc\n";
	daoMang(a,0,n-1);
	xuatMang(a,n);
	cout<<endl;
	
	int tp;
	int vt =0;
	
	cout<<"Nhap so thap phan : ";
	cin>>tp;
	
	if(tp == 0)
        cout << "0";
    else{
    	string hex="";
    	toHex(tp,hex);
        cout<<hex<<endl;
	}

	delete []a;
	return 0;
}
