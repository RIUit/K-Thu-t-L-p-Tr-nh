#include<iostream>
#include<algorithm>
using namespace std;


int main(){	
	char s[50];
	cout<<"Nhap 1 chuoi : ";
	cin.getline(s,50);
	
	char*p=s;
	
	while(*p){
		if(*p==' '){
			*(p+1)=toupper(*(p+1));
		}
		if(p==s){
			*p=toupper(*p);
		}
		p++;
	}
	cout<<s<<endl;
	

	return 0;
} 
