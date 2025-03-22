#include<iostream>
#include<cmath>
using namespace std;

int tinhTong(int n){
	if(n==1) return 1;
	return pow(n,2)+tinhTong(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<tinhTong(n)<<endl;
	return 0;
}
