#include <iostream>
#include <windows.h>
using namespace std;
main()
	{
	char mensaje[]={'P','R','O','G','R','A','M','A','C','I','O','N',' ','D','E',' ','S','O','F','T','W','A','R','E'};
	string nombres[]={"juan","maria","jose","elian","camilo","rocio","calima","pedro","elian","carlos victor"};
	int edades[]={2,45,567,0,-1,3,12,2,12,78,-45};
	for(int i=0;i<=23;i++)
		{
			cout<<"   "<<mensaje[i];
			Sleep(130);	
		}
		cout<<"   ";
			for(int i=0;i<=9;i++)
		{
			cout<<endl<<nombres[i];
			Sleep(80);	
		}
		cout<<endl;
			for(int i=0;i<=10;i++)
		{
			cout<<endl<<edades[i];
			Sleep(70);	
		}
	}
