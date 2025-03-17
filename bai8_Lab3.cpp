#include<iostream>
using namespace std;


void nhapMang(int**p,int r){
	for(int i=0;i<r;i++){
		for(int j=0;j<r;j++){
			cout<<"p["<<i<<"]["<<j<<"] = ";
			cin>>p[i][j];
		}
	}
}
void xuatMang(int**p,int r){
	for(int i=0;i<r;i++){
		for(int j=0;j<=i;j++){
			if(p[i][j]==0)
				cout<<"  ";
			else
				cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}
}
int tichChap(int i,int j){
	if(j==0||j==i) 
		return 1;
		
	return tichChap(i-1,j)+tichChap(i-1,j-1);
}
void pascal(int**p,int n){
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			p[i][j]=0;
			
	for(int i=0;i<n;i++)
		for(int j=0;j<=i;j++)
			p[i][j]= tichChap(i,j);	
	
}
	
int main(){
	int h;
	cout<<"Nhap h  : ";
	cin>>h;
	int**p;
	p=new int*[h];//so hang
	for(int i=0;i<h;i++)//so cot
		p[i]=new int[h];
	pascal(p,h);
	xuatMang(p,h);
	
	for(int i=0;i<h;i++){
		delete[]p;
	}
	delete[]p;
	return 0;
}
