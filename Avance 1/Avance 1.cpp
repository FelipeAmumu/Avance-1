#include<iostream>
#include<string>
using namespace std;

int main()
{
	char gene[15], ESRB[10], consola[10];
	string descri, Artiname;
	float  preciouni, impuesto, total;
	int  item,desicion, opc;

	cout << "{BIENVENIDO USUARIO, FAVOR DE SELECCIONAR LA ACCION A REALIZAR}" << endl;
	cout << "***MENU TIENDA***" << endl << "1.-Dar de alta un articulo" << endl << "2.-Modificar articulo" << endl << "3.-Baja de articulo" << endl << "4.-Lista de articulos" << endl << "5.-Limpiar Pantalla" << endl << "6.-Salir" << endl;

	cin >> opc;
	switch (opc)
	{
	case 1:
		
			cout << "Numero del Item" << endl;
			cin >> item;
			if (item < 0) {
				cout << "Favor de ingresar un numero valido" << endl;
				return main();
			}
			cout << "Ingrese los siguientes datos:" << endl << "Nombre del articulo" << endl;
			cin.ignore();
			getline(cin, Artiname);
			cout << "Descripcion" << endl;
			cin.ignore();
			getline(cin, descri);
			cout << "Genero" << endl;
			cin >> gene;
			cout << "Clasificacion" << endl;
			cin >> ESRB;
			cout << "Plataforma" << endl;
			cin >> consola;
			cout << "Precio Unitario" << endl;
			cin >> preciouni;
			impuesto = preciouni * 0.16;
			total = preciouni + impuesto;
			cout << "Usted agrego: " << Artiname << endl << "No. de item: " << item << endl << "Descripcion del producto: " << descri << endl << "Clasificacion: " << ESRB << endl << "Genero: " << gene << endl << "Para la plataforma: " << consola << endl << "Valor unitario: $" << preciouni << endl << "Precio con  IVA: $" << total << endl;
			cout << "Desea agregar otro producto? 1.-si 2.-no" << endl;
			cin >> desicion;
			if (desicion == 1) {
				return main();
			}
			return main();
			break;
		
	case 2:
	
		break;
	
	case 3:
	
		break;
	
	case 4:
	
		break;
	
	case 5:
	
		system("cls");
		return main();
		break;
	
	case 6:
	
		cout << "Gracias :3" << endl;
		exit(1);
		break;
	
	default:
		cout << "Opcion invalida" << endl;
		return main();
			break;
	}
		
}