#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void inHoa(char*p){
	while(*p){
		if(isspace(*p)) p++;
		else break;
	}
	*p=toupper(*p);
	p++;
	while(*p){
		if(isspace(*(p-1))&&islower(*p)){
			*p=toupper(*p);
		}
		p++;
	}
}
int main(){
	char c1[50],c2[50];
	cout<<"Nhap chuoi 1 : ";
	cin.getline(c1,50);
	cout<<"Nhap chuoi 2 : ";
	cin.getline(c2,50);
	if(strlen(c1) == strlen(c2))
		cout<<"Chuoi 1 = Chuoi 2\n";
	else if(strlen(c1)>strlen(c2))
		cout<<"Chuoi 1 > Chuoi 2\n";
	else
		cout<<"Chuoi 1 < Chuoi 2\n";
	char*p=c1;
	char*q=c2;
	inHoa(p);
	inHoa(q);	
	cout<<"Chuoi 1 duoc chuyen thanh : "<<c1<<endl;
	cout<<"Chuoi 2 duoc chuyen thanh : "<<c2<<endl;
	strcat(c1,c2);
	cout<<"Chuoi 1 sau khi noi voi chuoi 2 : "<<c1<<endl;
	
	
	return 0;
}
