#include<iostream>
#include <string>
#include<cctype>
using namespace std;


int main() {
	char s[51];
	cin.getline(s, 51);

	char* b = s;
      bool inWord = false; 

        for (int i = 0; i < strlen(s); i++) {
          
            if (isalpha(*b) && !inWord) {
                *b = toupper(*b);
                inWord = true; 
            }
          
            else if (*b== ' ') {
                inWord = false;
            }
        }
        cout << s << endl;


	system("pause");
	return 0;
}
