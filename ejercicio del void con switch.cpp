#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
char continuar,caracter;
int control;
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
	int control;
	do
	{
		int numero;
		cout<<"desea hacer la suma ? ingrese la tecla 1 "<<endl;
		cin>>numero;
		if(numero==1)
		{
			sumaop();
		}
		else
		{
		cout<<"no entraste a la suma"<<endl;	
		}
	
	restaop();
	multiplicacionop();
	divisionop();
	do 
{

	cout<<"menu principal"<<endl;
	cout<<"desea hacer la suma ? ingrese la tecla a "<<endl;
	cout<<"desea hacer la resta ? ingrese la tecla r "<<endl;
	cout<<"desea hacer la multiplicacion ? ingrese la tecla  m "<<endl;
	cout<<"desea hacer la division ? ingrese la tecla d "<<endl;
	cin>>caracter;
	switch(caracter)
	{
	
	case 'a':sumaop();
	break;
	case 'r':restaop();
	break;
	case 'm':multiplicacionop();
	break;
	case 'd':divisionop();
	break;
	
	}
cout<<"desea continuar en el menu? ingrese la tecla 1"<<endl;
	cin>>control;
}
	while (control==1);
		
	cout<<"desea continuar ? ingrese la tecla s "<<endl;
	cin>>continuar;
	}
	while (continuar=='s');

	

	
	

		
}



