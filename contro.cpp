#include<iostream>
using namespace std;

double* timDiaChi(double *a,int n){
	double*min=a;
	for(int i=0;i<n;i++){
		if(*min>a[i]){
			min=&a[i];
		}
	}
	return min;
}

void sapXepGiam(double*a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
			double tam=a[i];
			a[i]=a[j];
			a[j]=tam;
			}
		}
	}
}
int main(){

// Cap phat dong  
	int n=11;
	double* stdID;
	
	stdID = new double[n];
	long long mssv=2451052162;
	int k=n-2,tong=0;
	
	while(k>=0){
		stdID[k]=mssv%10;
		tong+=stdID[k];
		k--;
		mssv/=10;
	}
	stdID[n-1]=tong/10.0;

	for(int i=0;i<n;i++){
		cout<<stdID[i]<<" ";
	}
	cout<<endl;
	
	double *minDiaChi=timDiaChi(stdID,n);
	
	cout<<"Dia chi phan tu nho nhat : "<<minDiaChi<<endl;
	
	cout<<"Gia tri nho nhat : "<<*minDiaChi<<endl;
	
	sapXepGiam(stdID,n);
	cout<<"Mang sau khi sap xep giam dan \n";
	for(int i=0;i<n;i++){
		cout<<stdID[i]<<" ";
	}
	cout<<endl;

	//Huy cap phat dong
	delete []stdID;
	stdID=nullptr;
	
	system("pause");
	
	return 0;
}
