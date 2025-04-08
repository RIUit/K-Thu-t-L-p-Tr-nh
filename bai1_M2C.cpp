#include<iostream>
#include<cmath>
using namespace std;


int isNguyenTo(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int r,c;
	cin>>r>>c;
	int a[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(isNguyenTo(a[i][j]))
				cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
