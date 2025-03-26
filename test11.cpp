#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


int main(){	
	//Dung strcat() de noi chuoi
		//Chuoi dung truoc s1 phai > chuoi dung sau s2
	char s1[25]="Chao ban";
	char s2[]="Ngan";
	cout<<strcat(s1,s2)<<endl;
	
	//Dung strncat() de noi n ky tu s2(tu trai qua) vao chuoi s1
		//strncat(s1,s2,n)
	char s3[20]="Chao ban";
	char s4[]="Ngan";
	cout<<strncat(s3,s4,3)<<endl;
	
	//Dinh vi lan dau xuat hien cua c trong sp lay tu c tro ve sau
		//char *strchr(const char *sp, char c)
	char *sp= "Dai hoc Mo TpHCM";
	char *p1;
	p1 = strchr(sp, 'o');
	cout << p1 << endl;
	
	//Hàm strcmp() so sanh 2 chuoi vs nhau bang ma ASCII
		// int *strcmp(const char *s1, const char *s2);
		// s1<s2 =>-1	s1==s2 => 0		s1>s2 => 1
		
	//Hàm strncmp() so sanh s1 vs s2 den n ky tu
		// int *strncmp(const char *s1, const char *s2, size_t_n);
	
	
	//Hàm strcpy() sao chep chuoi s2 vao s1
		// int *strcpy(char *s1, const char *s2);
		
	//Hàm strncpy() sao chep s2 vs n ky tu vao s1
		// int *strncpy(char *s1, const char *s2, size_t_n);
		
	//Hàm strlen() tr ve kq so nguyen vs s la bien chuoi or con tro luu tru chuoi
		//strlen(const char *s) 
		
	//Hàm strtok() ngat s1 bang nhung tu s2
		// int *strtok(char *s1, const char *s2);
		
	//Hàm atof(): chuyen ve so thuc
		// double atof (const char *s);
		
	//Hàm atoi() chuyen ve so int
		// int atoi (const char *s);
	
	//Hàm atol(): chuyen ve ll
		// long atol (const char *s);
	return 0;
} 
