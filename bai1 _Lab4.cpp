#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cctype>
using namespace std;


void inHoa(char*s) {
	if (isalpha(s[0]))
		s[0] = toupper(s[0]);
	for (int i = 1; s[i] != '\0'; i++)
		if (s[i - 1] == ' '&& isalpha(s[i]))
			s[i] = toupper(s[i]);
}
int main() {
	char*s1 = new char[100];
	char*s2 = new char[100];
	cout << "Nhap chuoi s1 : ";
	cin.getline(s1, 100);
	cout << "Nhap chuoi s2 : ";
	cin.getline(s2, 100);

	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 < len2)
		cout << "Chuoi s1 nho hon s2\n";
	else if (len1 == len2)
		cout << "Chuoi s2 bang s1 \n";
	else
		cout << "Chuoi s1 lon hon s2 \n";
	inHoa(s1);
	inHoa(s2);
	cout << s1 << endl;
	cout << s2 << endl;

	char*s3 = new char[len1 + len2];
	strcpy(s3, s1);
	strncat(s3, s2, len2);
	cout << s3 << endl;

	delete[]s1;
	delete[]s2;
	delete[]s3;

	system("pause");
	return 0;
}