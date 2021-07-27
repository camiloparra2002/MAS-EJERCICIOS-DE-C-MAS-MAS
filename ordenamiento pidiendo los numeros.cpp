#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()
{
int fila,columna,temporal,cantidad;
int edades[20];
cout <<"por favor ingresa la cantidad de los elementos de un vector "<<endl;	
cin>>cantidad;
for (int i=0;i<cantidad;i++)
{
	cout<<"/n vector numero"<<1<< " : ;";
	cin>>edades[i];
}
for (fila=0;fila<cantidad;fila++)
	{
		for(columna=0;columna<cantidad -1;columna++)
		{
			if (edades[columna]>edades[columna+1])
				{
				
			temporal=edades[columna];
			edades[columna]=edades[columna+1];
			edades[columna+1]=temporal;
			
				}
			
			
		}
	
		
		
			
	}
	cout <<endl<<"el vector edades esta ordenado de forma ascedente "<<endl;
	for (int i=0;i<cantidad;i++)
	{
		cout <<"el vector tiene ["<<i<<" ]tenemos  "<<edades[i]<<endl;
	}
	cout <<endl<<"el vector edades esta ordenado de forma descendente "<<endl;
	for (int i=cantidad -1;i>=0;i--)
	{
		cout <<"el vector tiene ["<<i<<" ]tenemos  "<<edades[i]<<endl;
	}	

}
