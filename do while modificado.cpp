#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
	{
		int opcion,numero=1,temporal=0,resta,multiplicacion,suma,potencia,raiz;
		double numero1,numero2,division;
		char entrada='s', caracter;
		do
		{
				system("cls");
				cout<<"                  INGRESO A EDIFICIO EL TAUR \n";
				cout<<"                 ingrese el numero  (1) para ingresar al caso uno \n";
				cout<<"                 ingrese el numero (2) para ingresar al caso dos \n";
				cout<<"                 ingrese el numero (4) para ingresar al caso cuatro \n";
				cout<<"                 ingrese el numero (5) para ingresar al caso cinco \n";
				cout<<"                 ingrese el numero (8) para ingresar al caso ocho \n";
				cout<<"                 ingrese el numero (7) para ingresar al caso ocho \n";
				cout<<"                 ingrese el numero (10) para ingresar al caso diez \n\n";
				cout<<"                 ingrese el numero de opcion a tratar:   ";
				cin>>opcion;
				switch(opcion)
					{
						case 1: cout<<"			estoy en uno \n\n";
								do
								{	
									cout<<"voy en:  "<<numero<<endl;
									numero=numero+1;	
								}
								while(numero<=10);	
								
								cout<<"termine el do  "<<endl;
								numero=1;
								while(numero<=10)
								{
									cout<<"voy en:  "<<numero<<endl;
									numero=numero+1;
								}
								cout<<"el numero da:  "<<opcion*numero<<"\n";
						break;
						case 2: cout<<"					estoy en dos \n\n";
						break;
						case 4: cout<<"					estoy en cuatro \n\n";
						break;
						case 5: cout<<"					estoy en cinco \n\n";
								while(numero<=10)
								{
									cout<<"voy en:  "<<numero<<endl;
									numero=numero+1;
								}
								
								cout<<"termine el while  "<<endl;
								numero=1;
								do
								{	
									cout<<"voy en:  "<<numero<<endl;
									numero=numero+1;	
								}
								while(numero<=10);	
								cout<<"el numero da:  "<<opcion*numero<<"\n";
						break;
						case 7: 
							cout<<"					                  		estoy en siete \n\n";
							cout<<"                                   		INGRESO A piso 7 \n";
							cout<<"                         		ingrese el numero  (4) para ingresar al local uno \n";
							cout<<"                         		ingrese el numero (1) para ingresar al local dos \n";
							cout<<"                        		ingrese el numero (3) para ingresar al local cuatro \n";
							cout<<"                        		ingrese el numero (11) para ingresar al local cinco \n";
							cout<<"                        		ingrese el numero (2) para ingresar al local ocho \n";
							cout<<"                        		ingrese el numero (12) para ingresar al local doce \n\n";
							cout<<"                           		ingrese una de las opciones del menu a tratar:   ";
							cin>>opcion;
							switch(opcion)
								{
									case 4:
										cout<<"					estoy en cuatro interno \n\n";
										break;
									case 1:
										cout<<"					estoy en uno interno \n\n";
										break;
									case 3:
										cout<<"					estoy en TRES interno \n\n";
										break;
									case 11:
										cout<<"					estoy en once interno \n\n";
											cout<<"                        		INGRESO A OPERACIONES MATEMATICAS BASICAS \n";
											cout<<"                         		Para ingresar a la suma digite s,S ó + \n";
											cout<<"                         		Para ingresar a la resta digite R,r ó - \n";
											cout<<"                        		Para ingresar a la miltiplicacion digite M,m ó * \n"; 
											cout<<"                        		Para ingresar a la division digite d,D ó / \n"; 
											cout<<"                        		Para ingresar a la raiz cuadrada digite Q,q ó % \n"; 
											cout<<"                        		Para ingresar a la potencia digite P,p ó $ \n"; 
											cout<<"                           		ingrese una de las opciones del menu a tratar:   ";
												cout<<"  ingrese el primer numero  "<<endl;
												cin>>numero1;
												cout<<"  ingrese el segundo numero numero  "<<endl;
												cin>>numero2;
											
											cin>>caracter;
											switch(caracter)
												{
													case 's':
													case 'S':
													case '+':
														cout<<"					Estoy en la suma \n\n";
														cout<<" el resultado de sumar  "<<numero1<<" mas "<<numero2<<" es "<<numero1+numero2;
														break;
													case 'r':
													case 'R':
													case '-':
														cout<<"					Estoy en la resta \n\n";
														resta=numero1-numero2;
														cout<<" el resultado de restar  "<<numero1<<" menos "<<numero2<<" es "<<resta;
														break;
													case 'M':
													case 'm':
													case '*':
														multiplicacion=numero1*numero2;
														cout<<" el resultado de multiplicacion  "<<numero1<<" x "<<numero2<<" es "<<multiplicacion;
														cout<<"					Estoy en la multiplicacion \n\n";
														break;
													case 'D':
													case 'd':
													case '/':
														division=numero1/numero2;
														cout<<" el resultado de division "<<numero1<<" divido por "<<numero2<<" es "<<division;
														cout<<"					Estoy en la division \n\n";
														break;
													case 'Q':
													case 'q':
													case '%':
															raiz=sqrt(numero2);
														cout<<" el resultado de la raiz cuadrada de "<<numero2<<"  es "<< raiz;
														cout<<"					Estoy en la raiz cuadrada \n\n";
														break;
													case 'P':
													case 'p':
													case '$':
															potencia=pow(numero1,numero2);
														cout<<" el resultado de la raiz cuadrada de "<<numero1<<"  es "<< potencia<<endl;
														cout<<"					Estoy en la potencia \n\n";
														break;	
													default:
														cout<<"					LA OPCION SELECCIONADA NO PERTENECE A LAS OPCIONES DEL MENU \n\n";
														break;
												}
										break;
									case 2:
										cout<<"					estoy en dos interno \n\n";
										break;
									case 12:
										cout<<"					estoy en doce interno \n\n";
										break;	
									default:
										cout<<"					OPCION EQUIVOCADA\n\n";
										break;
								}
						break;
						case 8: cout<<"					estoy en ocho \n\n";
						break;
						case 10: cout<<"				estoy en diez \n\n";
						break;
						default: cout<<"					estoy en otro lado\n\n";
						break;
					}
					cout<<"					Desea continuar? ingrese el caracter s o S\n\n";
					cin>>entrada;
		}
		while((entrada =='s')||(entrada =='S'));		
			//	entrada=entrada+1;	
				//cout<<"			   oprime una tecla para continuar     ";
				//getch();
			//	temporal=temporal+1;
			//	cout<<"			   usted ha pasado "<<temporal<<" vez (ces)\n";
			//	system("pause");
			
				//cout<<"			   usted paso "<<temporal<<" veces\n";
	}
/*
#include <iostream>
#include <conio.h>
using namespace std;
main()
	{
		int opcion, numero=1,entrada;
		do
		{
			system("cls");
			cout<<"                                   INGRESO A EDIFICIO EL TAUR \n";
			cout<<"                         ingrese el numero  (1) para ingresar al caso uno \n";
			cout<<"                         ingrese el numero (2) para ingresar al caso dos \n";
			cout<<"                        ingrese el numero (4) para ingresar al caso cuatro \n";
			cout<<"                        ingrese el numero (5) para ingresar al caso cinco \n";
			cout<<"                        ingrese el numero (8) para ingresar al caso ocho \n";
			cout<<"                        ingrese el numero (10) para ingresar al caso diez \n\n";
			cout<<"                           ingrese el numero de opcion a tratar:   ";
			cin>>opcion;
			switch(opcion)
				{
					case 1: cout<<"					estoy en uno \n\n";
					break;
					case 2: cout<<"					estoy en dos \n\n";
					break;
					case 4: cout<<"					estoy en cuatro \n\n";
					break;
					case 5: cout<<"					estoy en cinco \n\n";
					break;
					case 8: cout<<"					estoy en ocho \n\n";
					break;
					case 10: cout<<"				estoy en diez \n\n";
					break;
					default: cout<<"					estoy en otro lado\n\n";
					break;
				}
			cout<<"                                 Deseas continuar? ingresa 1\n\n            	                              ";
			cin>>entrada;
		}while(entrada==1);
	}
*/
/*
					do
						{	
							cout<<"voy en:  "<<numero<<endl;
							numero=numero+1;	
						}
					while(numero<=10);	
					cout<<"termine el do  "<<endl;
					numero=1;
					while(numero<=10)
						{
							cout<<"voy en:  "<<numero<<endl;
							numero=numero+1;
						}
						cout<<"el numero da:  "<<opcion*numero<<"\n";					
cout<<"la multiplicacion da:  "<<opcion*numero;
*/
