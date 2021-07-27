#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
char continuar;
void sumaop();
void restaop();
void multiplicacionop();
void divisionop();



void sumaop()
{
	
	cout<<"bienvenido a la suma "<<endl;
	 int s1,s2,suma;
	 cout<<"a continuacion digite dos numeros para hacer la suma "<<endl;
	 cin>>s1;
	 cin>>s2;
	 suma=s1+s2;
	 cout<<"la suma de "<<s1<< " + "<<s2<<" da o es igual a "<<suma<<endl;
}
void restaop()
{
cout<<"bienvenido a la resta "<<endl;
	 int r1,r2,resta;
	 cout<<"a continuacion digite dos numeros para hacer la resta "<<endl;
	 cin>>r1;
	 cin>>r2;
	 resta=r1-r2;
	 cout<<"la resta de  "<<r1<<" - "<<r2<<" da o es igual a  "<<resta<<endl;	
	
}
void multiplicacionop()
{
int m1,m2,multiplicacion;
	 cout<<"a continuacion digite dos numeros para hacer la multiplicacion "<<endl;
	 cin>>m1;
	 cin>>m2;
	 multiplicacion=m1*m2;
	 cout<<" la multiplicacion de  "<<m1<<" x "<<m2<<" da o es igual a "<<multiplicacion<<endl;	
	
}
void divisionop()
{
double d1,d2;
double division;
	 cout<<"a continuacion digite dos numeros para hacer la division "<<endl;
	 cin>>d1;
	 cin>>d2;
	 division=d1/d2;
	 cout<<"la division de "<<d1<<" / "<<d2<<" da o es igual a "<<division<<endl;	
	
}


main()
{
	do
	{
	sumaop();
	restaop();
	multiplicacionop();
	divisionop();
	cout<<"desea continuar ? ingrese la tecla s "<<endl;
	cin>>continuar;
	}
	while (continuar=='s');

	

	
	

		
}



