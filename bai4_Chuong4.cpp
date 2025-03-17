#include<iostream>
#include <string>
#include<cctype>
#include<cstring>
using namespace std;

int main(){
	char s[50];
	cin.getline(s,50);
	
	char s2[] = " ";
	char* ptok = strtok(s, s2);
	while (ptok != NULL)
	{
		cout << ptok << endl;
		ptok = strtok(NULL,s2);

	}
}
