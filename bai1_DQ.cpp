#include<iostream>
using namespace std;

int tinhTong(int n){
	if(n==1) return 1;
	return n+tinhTong(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<tinhTong(n)<<endl;
	return 0;
}
