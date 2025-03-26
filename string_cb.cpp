#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){
	string s;
	cout<<"Chuoi s : ";
	getline(cin,s);
	
	string h;
	cout<<"Chuoi h : ";
	getline(cin,h);
	
	cout<<"Chuoi s co do dai: ";
	cout<<s.length()<<endl;	
	
	s=s+h;
	cout<<"Chuoi s + h : ";
	cout<<s<<endl;

	int kq=s.compare(h);
	if(kq==0)
		cout<<"Chuoi s = Chuoi h \n";
	else if(kq>0)
		cout<<"Chuoi s > Chuoi h \n";
	else
		cout<<"Chuoi s < Chuoi h\n";
		
	string d=s.substr(4,3);
	cout<<d<<endl;
	
	for(int i=0;i<s.length();i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i]=toupper(s[i]);
		}
	}
	cout<<"Chuoi s sau khi viet hoa : "<<s<<endl;
	
	string g;
	cout<<"Nhap chuoi g :";
	getline(cin,g);
	char z;
	cout<<"Nhap ky tu : ";
	cin>>z;
	
	int dem=0;
	for(int x : g){
		if(x==z)
			dem++;
	}
	cout<<z<<" co trong chuoi g : "<<dem<<endl;
	return 0;
}
