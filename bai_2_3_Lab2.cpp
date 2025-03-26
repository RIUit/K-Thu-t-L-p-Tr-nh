#include<iostream>
using namespace std;

int giaithua(int n){
	if(n == 0) return 1;
	return n * giaithua(n - 1);
}
int fibonacci(int n){
	if(n == 0 || n == 1) return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
	int n; cin>>n;
	
	cout<<"Giai thua cua so nguyen "<<n<<" : "<<giaithua(n)<<endl;
	cout<<"Fibonacci cua so nguyen "<<n<<" : "<<fibonacci(n)<<endl;
	
	return 0;
}
