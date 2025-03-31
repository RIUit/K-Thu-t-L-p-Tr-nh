#include<iostream>
using namespace std;


bool kiemTraDX(char*s) {
	char*l = s;
	char*r = s + strlen(s) - 1;
	while (l < r) {
		if (tolower(*l) != tolower(*r))
			return false;
		l++;
		r--;
	}
}
int main() {
	char*s = new char[100];
	cout << "Nhap s : ";
	cin.getline(s, 100);
	if (kiemTraDX(s))
		cout << "s1 doi xung \n";
	else
		cout << "s1 khong doi xung\n";

	system("pause");
	return 0;
}