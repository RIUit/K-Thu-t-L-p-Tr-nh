#include<iostream>
#include<algorithm>
using namespace std;


int main(){	
	char s[50];
	cout<<"Nhap 1 chuoi : ";
	cin.get(s,50);
	
	char*p=s;
	
	int dem=0;
	int khoangtrang=0;
	while(*p){
		if(isalnum(*p))
			dem++;
		if(isspace(*p))
			khoangtrang++;
		p++;
	}
	cout<<"So ky tu or ky tu so : "<<dem<<endl;
	cout<<"So ky tu khoang trang : "<<khoangtrang<<endl;
	
	
	return 0;
} 
