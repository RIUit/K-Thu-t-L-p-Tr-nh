#include<iostream>
#include <string>
#include<cctype>
using namespace std;


int main() {
	char s[51];
	cin.get(s, 51);

	char* b = s;
	int demkytu = 0, demkhoangtrang = 0;
	
	while (*b) {
		if (isalnum(*b)) demkytu++;
		if (isspace(*b)) demkhoangtrang++;
		b++;
	}
	cout <<"Dem ky tu cua ky tu va so : " << demkytu << endl;
	cout <<"Dem khoang trang : " << demkhoangtrang << endl;

	return 0;
}