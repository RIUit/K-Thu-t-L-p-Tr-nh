#include<iostream>
#include<cmath>
using namespace std;

void nhapHeSo(double &a,double &b,double &c){
	cout<<"Nhap he so a,b,c : ";
	cin>>a>>b>>c;
}
void ptBac1(double a,double b){//ax+b	a=0 vo so nghiem	a,b=0 vo nghiem
	if(a==0)				  //a,b!=0 x=-b/a
		cout<<b==0?" Vo nghiem\n":" Vo so nghiem\n";
	else
	 cout<<"x = "<<-b/a<<endl;
}
void ptBac2(double a,double b,double c){
	if(a==0&&b==0&&c==0)
		cout<<"Pt vo nghiem \n";
	else if(a==0&&b==0)
		cout<<"PT vo so nghiem\n";
	else if(a==0)
		ptBac1(b,c);
	else{
		double dt=b*b-4*a*c;
		if(dt<0)
			cout<<"Pt vo nghiem\n";
		else if(dt==0)
			cout<<"Pt co nghiem kep x = "<<-b/(2*a);
		else{
			cout<<"Pt co 2 nghiem phan biet : \n";
			double x1=(-b+sqrt(dt))/(2*a);
			double x2=(-b-sqrt(dt))/(2*a);
			cout<<"x1 = "<<x1<<endl;
			cout<<"x2 = "<<x2<<endl;
		}
	}
}
int main(){
	double a,b,c;
	cout<<"Tinh nghiem cua pt bac 2 : \n";
	nhapHeSo(a,b,c);
	ptBac2(a,b,c);
	return 0;
}
