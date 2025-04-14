#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<ctime>
using namespace std;


int namHienTai() {
	time_t t = time(0);
	tm*now = localtime(&t);
	//cout << now->tm_year + 1900;
	return now->tm_year + 1900;
}
struct NhanVien {
	string maNV;
	string tenNV;
	int namLam;
	int namSinh;
	NhanVien() {
		maNV = "";
		tenNV = "";
		namLam = 0;
		namSinh = 0;
	}
	NhanVien(string ma, string ten, int naml, int nams) {
		maNV = ma;
		tenNV = ten;
		namLam = naml;
		namSinh = nams;
	}
	void nhap() {
		cout << "Nhap ma NV : ";
		getline(cin, maNV);
		cout << "Nhap ten NV : ";
		getline(cin, tenNV);
		cout << "Nhap nam lam viec : ";
		cin >> namLam;
		cout << "Nhap nam sinh : ";
		cin >> namSinh;
	}
	void xuat() {
		cout << "Ma NV : " << maNV << endl;
		cout << "Ten NV : " << tenNV << endl;
		cout << "Nam lam viec : " << namLam << endl;
		cout << "Nam sinh : " << namSinh << endl;
		cout << "Tham nien : " << thamNien() << endl;
		cout << "Tuoi : " << tuoi() << endl;
	}
	int thamNien() {
		return namHienTai() - namLam;
	}
	int tuoi() {
		return namHienTai() - namSinh;
	}
};

int main() {
	NhanVien nv;
	nv.nhap();
	nv.xuat();



	system("pause");
	return 0;
}