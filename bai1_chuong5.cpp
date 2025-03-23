#include<iostream>
using namespace std;


struct nhanvien{
	string mnv;
	string hoten;
	int nam;
	string chuc;
	double bac;
	void in(){
		cout<<"Thong tin cua nhan vien  : \nMNV : "<<mnv<<"\nHo va ten : "<<hoten<<"\nNam : "<<nam<<"\nChuc vu : "<<chuc<<"\nBac luong : "<<bac;
	}
};
int main(){
	nhanvien nv1;
	cout<<"Ma nhan vien : ";
	getline(cin,nv1.mnv);
	cout<<"Ho va ten : ";
	getline(cin,nv1.hoten);
	cout<<"Nam sinh : ";
	cin>>nv1.nam;
	cin.ignore();
	cout<<"Chuc vu : ";
	getline(cin,nv1.chuc);
	cout<<"Bac luong : ";
	cin>>nv1.bac;
	
	nv1.in();	
	return 0;
}
