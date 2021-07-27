#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()
{
int fila,columna,temporal;	
int edades[]={2,45,567,0,-1,3,12,2,12,78,-45};
for (fila=0;fila<=11;fila++)
	{
		for(columna=0;columna<11 -1;columna++)
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
	for (int i=0;i<11;i++)
	{
		cout <<"el vector tiene ["<<i<<" ]tenemos"<<edades[i]<<endl;
	}
	cout <<endl<<"el vector edades esta ordenado de forma descendente "<<endl;
	for (int i=10;i>-1;i--)
	{
		cout <<"el vector tiene ["<<i<<" ]tenemos"<<edades[i]<<endl;
	}	

}
