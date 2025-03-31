#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


int main() {
	char*c1 = new char[100];
	do
	{
		cout << "Nhap ho,ten : ";
		cin.getline(c1, 100);
		if (strchr(c1,',') == NULL)
			cout << "Nhap sai (co dau ,)\n";

	} while (strchr(c1,',') == NULL);
	
	char*c2 = new char[strlen(c1)];

	strcpy(c2, "");

	char*token = strtok(c1, ",");
	while (token!=NULL)
	{
		strcat(c2, token);
		token = strtok(NULL, ",");
	}
	cout << c2 << endl;


	delete[]c1;
	delete[]c2;
	delete[]token;
	system("pause");
	return 0;
}