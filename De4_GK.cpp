#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

const int MAX=15;


int tich_digit_Old(int n,int tich = 1){
	if(n < 10)
		if(n % 2 != 0) return n;
		else return 0;
	if(n % 10 % 2!= 0)
		tich *= n % 10;

	return tich_digit_Old(n / 10,tich);
}
int tongHangLe(int a[MAX][MAX],int r,int c){
	int tong=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i % 2 != 0)
				tong+=a[i][j];
		}
	}
	return tong;
}
long long tichHangChan(int a[MAX][MAX],int r,int c){
	long long tich=1;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i % 2 == 0)
				tich*=1ll*a[i][j];
		}
	}
	return tich;
}
void khoiTao(int a[MAX][MAX],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			a[i][j]=rand() % 41 + 10;
	}
}
void xuatMang(int a[MAX][MAX],int r,int c){
	cout<<"   ";
	for(int i =0;i<c;i++){
		cout<<"C"<<i<<" ";
	} 
	cout<<endl;
	for(int i=0;i<r;i++){
		cout<<"R"<<i<<" ";
		for(int j=0;j<c;j++){
			
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int sdn(int n,int tam=0){
	if(n==0) return tam;
	return sdn(n/10,tam*10+n%10);  
}
int demSDN_Mang(int a[MAX][MAX],int r,int c){
	int dem=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]==sdn(a[i][j])){
				cout<<a[i][j]<<" "; 
				dem++;
			}		
		}
	}
	cout<<endl;
	return dem;
}
int* timDiaChiMin(int* a, int n, int* minPtr) {
    if (n == 0) return minPtr;  
    if (*a < *minPtr) {
        minPtr = a; 
    }
    return timDiaChiMin(a + 1, n - 1, minPtr); 
}
void sapXepGiamDan(int*a,int n){
	for(int i=0;i<n;i++){
		int*max=a+i;
		for(int j=i+1;j<n;j++){
			if(*(a+j)>*max){
				max=a+j;
			}
		}
		if(max!=(a+i)){
			swap(*max,*(a+i));
		}	
	}
	
}
int main(){
//	int a[MAX][MAX];
//	srand(time(0));
//	int r,c;
//	
//	do{
//		cout<<"Nhap so hang va cot : ";
//		cin>>r>>c;
//		
//		if(r>MAX||c>MAX||r<1||c<1) 
//			cout<<"Nhap sai ! nhap lai ! \n";
//				
//	}while(r>MAX||c>MAX||r<1||c<1);
//	
//	khoiTao(a,r,c);
//	
//	xuatMang(a,r,c);
//	
//	cout<<"Tong hang le : "<<tongHangLe(a,r,c)<<endl;
//	cout<<"Tich hang chan : "<<tichHangChan(a,r,c)<<endl;
//	
//	int x;
//	cout<<"Nhap x : ";
//	cin>>x;
//	cout<<tich_digit_Old(x)<<endl;
//	cout<<"Danh sach so dao nguoc co trong mang : ";
//	int so=demSDN_Mang(a,r,c);
//	cout<<"Dem so dao nguoc : "<<so<<endl;
//	
//	long long mssv;
//	int n=11;
//	double*stdID = new double[n];
//	cout<<"Nhap mssv gom 10 so : ";
//	cin>>mssv;
//	int k=n-2,tong=0;
//	while(k>=0){
//		stdID[k]=mssv%10;
//		tong+=stdID[k];
//		k--;
//		mssv/=10;
//	}
//	stdID[n-1]=1.0*tong/10;
//	cout<<"Tong : "<<tong<<endl;
//	for(int i=0;i<n;i++){
//		cout<<stdID[i]<<" ";
//	}
	
	int n=10;
	int*arr=new int[n];
	cout<<"Nhap phan tu cho mang : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int* minPtr = arr;
    minPtr = timDiaChiMin(arr, n, minPtr);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" "<<&arr[i]<<endl; 
	} 
    cout << "Dia chi phan tu nho nhat dau tien: " << minPtr << endl;
    cout << "Gia tri min: " << *minPtr << endl;
	sapXepGiamDan(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	delete []arr;
//	delete []stdID;
//	stdID=nullptr;
	return 0;
}
