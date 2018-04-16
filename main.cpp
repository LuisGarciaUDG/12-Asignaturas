/* programa_12 asignaturas
estructura selectiva multiple
Autor: Luis Alberto García Rodríguez
Número de lista: 11
Fecha: 17 de febrero 2015
*/

# include <iostream>
#include <stdlib.h>

using namespace std;

int main ()

{
	int opcion;
	system ("cls");
	cout <<"\n\n Programa asignaturas";
	cout <<"\n 1.- Matematicas";
	cout <<"\n 2.- Quimica";
	cout <<"\n 3.- Fisica";
	cout <<"\n 4.- Salir";
	cout <<"\n\n Opcion ";
	cin>>opcion;

	switch (opcion)
	{
		case 1:{cout<<"\n Elegiste Matematicas";
		}break;

		case 2:{cout <<"\n Elegiste Quimica";
    	}break;

	    case 3:{cout<<"\n Elegiste Fisica";
	    }break;

	    case 4:{cout<<"\n Elegiste salir";
    	}break;

	    default:{cout<<"\n Error, opcion inexistente \n";
        system ("pause");
        return main ();
        }
    }
}
