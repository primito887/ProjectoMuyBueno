#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

struct habitante{
	string nombre;
	string nit;
};

struct paises{
	string cod;
	string nombre;
	int cantidad;
	float precio; 
	float subtotal;
};

struct registro {
    int nfactura;
    habitante  habitante[20];
    paises paises[5];
	string fecha;
	float total; 
};


registro registro;

void Ingresarhabitante(int nhabit){
	cout<<"datos del Habitante"<<endl;
	cout<<"nombre:"<<endl;
	cin>>registro.habitante[nhabit].nombre;

}
 
void mostrarhabitante(){
	for(int con=0;con<=1;con++){
		if(registro.habitante[con].nombre==""){
		}else{
			cout<<"Habitante:"<<registro.habitante[con].nombre<<endl;
			cout<<"-------------------------------"<<endl;
		}
	}
}

ofstream arch("boleta.txt");


void editarhabitante(){
	cout<<"ingrese el numero de cliente que desea editar"<<endl;
	int nhabit;
	cin>>nhabit;
	cout<<"datos del cliente"<<endl;
	cout<<"nombre:"<<endl;
	cin>>registro.habitante[nhabit].nombre;
}


void eliminarhabitante(){
	cout<<"ingrese el Habitante que desea eliminar"<<endl;
	int nhabit;
	cin>>nhabit;
	registro.habitante[nhabit].nombre="";
}

int main(int argc, char** argv) {
	cout<<"------menu------"<<endl;
	cout<<"1) Paises"<<endl;
	cout<<"2) Habitantes "<<endl;
	cout<<"Que opcion desea"<<endl;
	int resp1;
	cin>>resp1;
	int resp2;
	string conf1;

	
	int h_habit=0;

	switch(resp1){
	case 1:
		do{
			system("cls");
			cout<<"Menu de clientes"<<endl;
			cout<<"1) Ingresar Habitante"<<endl;
			cout<<"2) Mostrar Habitante"<<endl;
			cout<<"3) Editar Habitante"<<endl;
			cout<<"4) Eliminar habitante"<<endl;
			cout<<"5) Crear boleta"<<endl;
			cout<<"Que opcion desea"<<endl;
			cin>>resp2;
			switch(resp2){
				case 1:
					if(h_habit<=1){
						Ingresarhabitante(h_habit);
						h_habit++;
					}else{
						cout<<"Exedio el numero de clientes"<<endl;
					}
					break;
				case 2:
					mostrarhabitante();
					break;
				case 3:
					mostrarhabitante();
					editarhabitante();
					break;
				case 4:
					mostrarhabitante();
					eliminarhabitante();
					break;
				default:
					cout<<"No valido"<<endl;
					break;
				case 5:
					arch<<"boleta de calificaciones"<<endl;
					break;
			}
			cout<<"Desea otra operacion de Clientes"<<endl;
			cin>>conf1;
		} while(conf1=="si");
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		cout<<"No valido"<<endl;
		break;
	}

	return 0;
}