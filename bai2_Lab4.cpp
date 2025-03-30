#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;


int main(){
	char ho[50],ten[50];
	cout<<"Nhap ho,ten : ";
	cin.get(ho,50,',');
	cin.ignore();
	cin.get(ten,50);
	cout<<ho<<" "<<ten<<endl;
	
	
	return 0;
}
