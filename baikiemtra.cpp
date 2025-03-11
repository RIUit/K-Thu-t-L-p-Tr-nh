#include<iostream>
#include<ctime>
using namespace std;

const int MAX=15;

void nhapMang(int a[MAX][MAX],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j]= rand() % 40 + 10;
		}
	}
}
void xuatMang(int a[MAX][MAX],int r,int c){
	cout<<"\t";
	for(int t=0;t<c;t++){
		cout<<"C"<<t<<"\t";
	}
	cout<<endl;
	for(int i=0;i<r;i++){
		cout<<"R"<<i<<"\t";
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int sum(int a[MAX][MAX],int r,int c){
	int sum=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i%2!=0){
				sum+=a[i][j];
			}
		}
	}
	return sum;
}
long long mul(int a[MAX][MAX],int r,int c){
	long long mul=1;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i%2==0){
				mul*=a[i][j]*1ll;
			}
		}
	}
	return mul;
}
long long mulLe(int n){
	if(n<10) return n;
	if(n%2!=0) return n%10*mulLe(n/10);
	return mulLe(n/10);
	
}
int sdn(int n,int tam=0){//123
	if(n==0) return tam;
	return sdn(n/10,tam*10+n%10);
	
}
int countSdnInArray(int a[MAX][MAX],int r,int c){
	int count = 0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		if ( a[i][j] ==	sdn(a[i][j]))
		count++;
		}
	}
	return count; 
}
int main(){
	srand(time(NULL));
	int a[MAX][MAX];
	int r,c;
	int n = 15;
	do{
		cin>>r>>c;
		if(r>15||c>15)
		cout<<"Nhap vuc gioi han r va c !\n";
	}while(r>15||c>15);
	
	nhapMang(a,r,c);
	xuatMang(a,r,c);
	cout<<"Tong hang le : "<<sum(a,r,c)<<endl;
	cout<<"Tich hang chan : "<<mul(a,r,c)<<endl;
	
	cout<<"Tich so le trong "<<12345<<" = "<<mulLe(12345)<<endl;
	
	cout<<"So dao nguoc cua "<<123<<" = "<<sdn(123)<<endl;
	
	cout<<"So luong phan tu la so doi xung trong mang la: "<<countSdnInArray(a,r,c)<<endl;
	
	// Cap phat dong  
	int m=11;
	double* stdID;
	
	stdID = new double[m];
	long long mssv=2451052162;
	int k=n-2,tong=0;
	while(k>=0){
		stdID[k]=mssv%10;
		k--;
		tong+=stdID[k];
		mssv/=10;
	}
	
	for(int i=0;i<m;i++){
		cout<<stdID[i]<<" ";
	}
	cout<<tong<<endl;
	

	//Huy cap phat dong
	delete []stdID;
	stdID=nullptr;
	
	system("pause");
	
	return 0;
}
