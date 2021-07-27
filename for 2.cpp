#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	int n,x,numero;	
	//for(n=1;n<11;n++)
	for(n=1;n<=5;n++)
	{
	cout<<"esta lloviendo en entrada  :"<<n<<endl;
			for(x=1;x<=5;x++)
		{
			cout<<" ***********lloviendo:********"<<x<<endl;
			
		
		}		
		cout<<"quede en lloviendo :"<<x<<endl;
		
	}	
				cout<<"quede en entrada :"<<n<<endl;
				cout<<"ingrese el numero hasta donde quiere que llegue el para "<<n<<endl;
				cin>>numero;
	
	cout<<endl;
	for(n=numero;n>=1;n--)
	{
	cout<<"esta lloviendo en :"<<n<<endl;	
		
	}
	cout<<"quede en :"<<n<<endl;	
}
