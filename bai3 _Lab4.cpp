#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


char* trim(char*p) {
	while (isspace(*p))
		p++;
	if (*p == '\0')
		return p;
	char*end = p + strlen(p) - 1;
	while (end > p&&isspace(*end))
		end--;
	*(end + 1) = '\0';
}
int demKyTu(char*s) {
	int dem = 0;
	for (int i = 1; s[i] != '\0'; i++)
		if (isalpha(s[i])&&(isspace(s[i+1]||s[i+1]=='\0')))
			dem++;
	return dem;
}
void chuoiThuong(char*s) {
	while (*s)
	{
		if (isalpha(*s))
			*s = tolower(*s);
		s++;
	}
}
char* inHoa(char* &s) {
	while (*s)
	{
		if (isalpha(*s))
			*s = toupper(*s);
		s++;
	}
	return s;
}
int demKhoangTrang(char*s) {
	int dem = 0;
	while (*s)
	{
		if (isspace(*s))
			dem++;
		s++;
	}
	return dem;
}int demChuSo(char*s) {
	int dem = 0;
	while (*s)
	{
		if (isalnum(*s))
			dem++;
		s++;
	}
	return dem;
}
int main() {
	char*s1 = new char[100];
	cout << "Nhap chuoi : ";
	cin.getline(s1, 100);
	cout << s1 << "." << endl;
	char*s2 = new char[strlen(s1)];
	strcpy(s2, s1);
	s2 = trim(s2);
	cout << s1 << "." << endl;
	cout << s2 << "." << endl;

	cout <<"Dem khoang trang : "<< demKhoangTrang(s1) << endl;

	cout <<"Dem ky tu : "<< demKyTu(s1) << endl;

	chuoiThuong(s1);
	cout <<"Chuoi thuong : "<< s1 << endl;

	char*s3 = new char[strlen(s1)];
	strcpy(s3, s1);
	s3 = inHoa(s3);
	cout << "In hoa : " << s3 << endl;
	
	cout <<"Dem chu so hoac so : "<< demChuSo(s1) << endl;

	delete[]s1;
	delete[]s2;
	delete[]s3;
	system("pause");
	return 0;
}