#include <iostream>
#include <string.h>
#include <windows.h>
#include <fstream>
using namespace std;
void menu();void guardar();void eliminar();void consultar();void buscar();void modificar();void salir();
char nombre[30],grupo[10];
char mensaje[] = {'P','R','O','G','R','A','M','A','C','I','O','N',' ','D','E',' ','S','O','F','T','W','A','R','E'};
int semestre,edad,auxclave,clave;
bool encontrado;
main()
{
	menu();//	system("PAUSE");
}
void menu()
{
	int opcion;
	do
	{
		cout<<"\n \t\t\t\t\t Manejo de archivos en c++ \n"<<endl;
		cout<<"\t\t\t\t\t 1.Guardar"<<endl;
		cout<<"\t\t\t\t\t 2.Eliminar"<<endl;
		cout<<"\t\t\t\t\t 3.Consultar Registros"<<endl;
		cout<<"\t\t\t\t\t 4.Buscar Registros"<<endl;
		cout<<"\t\t\t\t\t 5.Modificar"<<endl;
		cout<<"\t\t\t\t\t 6.Salir"<<endl;
		cout<<"\n \t\t\t\t\t Seleccione una de las Opciones"<<endl;
		cin>>opcion;
		switch(opcion)
			{
			case 1: guardar();	break;
			case 2: eliminar();	break;
			case 3: consultar();break;
			case 4: buscar();	break;
			case 5: modificar();break;
			case 6: salir();	break;
			default: cout<<"La Opcion que Elegiste no hace parte del Menu";	break;
			}
	}
	while(opcion!=6);
}

void guardar()
{
	ofstream escritura; ifstream consulta;bool repetido=false;
	escritura.open("aprendiz.txt", ios::out|ios::app);	consulta.open("aprendiz.txt", ios::in);
	if(escritura.is_open() && consulta.is_open())
		{
			cout<<"ingresa la clave del aprendiz:";
			cin>>auxclave;
			consulta>>clave;
			while(!consulta.eof())
				{
					consulta>>nombre>>semestre>>grupo>>edad;
					if(clave==auxclave)
						{
							cout<<"Ya existe el registro con esa clave"<<endl;
							repetido=true;
							break;
						}
					consulta>>clave;
				}
				if(repetido==false)
					{
						cout<<"Ingresa el Nombre del Aprendiz";	cin>>nombre;
						cout<<"Ingresa el Semestre del Aprendiz";cin>>semestre;
						cout<<"Ingresa el Grupo del Aprendiz";	cin>>grupo;
						cout<<"Ingresa la Edad del Aprendiz";	cin>>edad;
						escritura<<auxclave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
						cout<<"Registro agregado con exito!"<<endl;
					}
		}
		else
		{
			cout<<"Error, el registro no se pudo abrir o no ha sido credo"<<endl;
		}
	escritura.close();consulta.close();
	}
void eliminar()
{
	ofstream aux; 
	ifstream leer;	encontrado=false;	int auxclave;
	aux.open("auxiliar.txt", ios::out);	leer.open("aprendiz.txt", ios::in);
	if(aux.is_open() && leer.is_open())
		{
			cout<<"Ingresa la clave del aprendiz que deseas Eliminar"<<endl;
			cin>>auxclave;
			leer>>clave;
			while(!leer.eof())
				{
					leer>>nombre>>semestre>>grupo>>edad;
					if(auxclave==clave)
						{
							encontrado=true;
							cout<<"Registro Eliminado"<<endl;
						}
					else
						{
							aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
						}
					leer>>clave;
				}	
		}
	else
		{
			cout<<"Error, el registro no se pudo abrir o no ha sido credo"<<endl;
		}
	if(encontrado==false)
		{
			cout<<"Error, Reviza tu clave pues esa no esta dentro de mi archivo"<<auxclave<<endl;
		}
	leer.close();
	aux.close();
	remove("aprendiz.txt");
	rename("auxiliar.txt","aprendiz.txt");	
	}
void consultar()
{
	ifstream leer;	leer.open("aprendiz.txt", ios::out|ios::in);	
	if(leer.is_open())
		{
			cout<<"						Registros del archivo aprendiz.txt"<<endl;
			cout<<"						----------------------------------"<<endl;
			leer>>clave;
			while(!leer.eof())
			{
				leer>>nombre>>semestre>>grupo>>edad;
				cout<<"					Clave:"   <<clave<<endl;
				cout<<"					Nombre:"  <<nombre<<endl;
				cout<<"					Semestre:"<<semestre<<endl;
				cout<<"					Grupo:"   <<grupo<<endl;
				cout<<"					Edad:"    <<edad<<endl;
				leer>>clave;
				cout<<"					----------------------------------"<<endl;
			}
		}
		else
		{
			cout<<"Error, el registro no se pudo abrir o no ha sido creado"<<endl;
		}
	leer.close();
}
void buscar()
{
	cout<<"La Opcion que Elegiste Fue buscar";
	ifstream leer;	
	leer.open("aprendiz.txt", ios::out|ios::in);
	encontrado=false;	
	if(leer.is_open())
		{
			cout<<"Ingresa la clave del aprendiz que deseas buscar: ";
			cin>>auxclave;
			leer>>clave;
			while(!leer.eof())
			{
				leer>>nombre>>semestre>>grupo>>edad;//leyendo campos del registro
				if(auxclave==clave)//comparacion para verificar si el registro es encontrado
					{
						cout<<"					----------------------------------"<<endl;
						cout<<"					Clave:"   <<clave<<endl;
						cout<<"					Nombre:"  <<nombre<<endl;
						cout<<"					Semestre:"<<semestre<<endl;
						cout<<"					Grupo:"   <<grupo<<endl;
						cout<<"					Edad:"    <<edad<<endl;
						cout<<"					----------------------------------"<<endl;
						encontrado=true;
					}
					leer>>clave;
			}
			if(encontrado==false)
				{
					cout<<"no se encontraron registros con esa clave"<<auxclave<<endl;
				}
		}
		else
		{
			cout<<"No se pudo abrir el archivo o aun no ha sido creado"<<endl;
		}
	leer.close();//cerrar archivo
}
void modificar()
{
	ofstream aux;
	ifstream leer;
	encontrado=false;
	int auxclave;
	char auxnombre[20];
	aux.open("auxiliar.txt",ios::out);
	leer.open("aprendiz.txt",ios::in);
	if(aux.is_open() && leer.is_open())
	{
		cout<<"Ingresa la clave del aprendiz que deseas modificar "<<endl;
		cin>>auxclave;
		leer>>clave;
		while(!leer.eof())
		{
		leer>>nombre>>semestre>>grupo>>edad;
		if(auxclave==clave)
			{		
			encontrado=true;
			cout<<"					----------------------------------"<<endl;
			cout<<"					Clave:"   <<clave<<endl;
			cout<<"					Nombre:"  <<nombre<<endl;
			cout<<"					Semestre:"<<semestre<<endl;
			cout<<"					Grupo:"   <<grupo<<endl;
			cout<<"					Edad:"    <<edad<<endl;
			cout<<"					----------------------------------"<<endl;
			cout<<"	        Ingresa el nuevo nombre del aprendiz con clave:"<<clave<<endl;
			cin>>auxnombre;
			aux<<clave<<" "<<auxnombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
			cout<<"El registro fue modificado con exito! "<<endl;
			}
		else
			{
				aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
			}
		leer>>clave;
		}
		if(encontrado==false)
			{
				cout<<"no se encontraron registros con esa clave"<<auxclave<<endl;
			}	
	}
	else
	{
		cout<<"No se pudo abrir el archivo o aun no ha sido creado"<<endl;
	}
	leer.close();
	aux.close();
	remove("aprendiz.txt");
	rename("auxiliar.txt","aprendiz.txt");	
}
void salir()
{
	cout<<endl<<endl<<endl<<"\t\t\t\t\t\t";
	for(int i=0;i<=23;i++)
		{
			cout<<mensaje[i];
			Sleep(80);
		}
		cout<<endl<<endl<<"\t\t\t\t\t       Adios..programa finalizado";
}
