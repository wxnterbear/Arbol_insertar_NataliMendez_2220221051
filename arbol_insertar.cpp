#include <iostream>

using namespace std;

struct Nodo{
	
	int num;
	Nodo *der;
	Nodo *izq;
};

typedef struct Nodo *arbol;

void insertNodoRaiz (arbol& raiz, int valor){
	
	arbol x = new struct Nodo;
	x -> num = valor;
	x -> der = NULL;
	x -> izq = NULL;
	
	raiz = x;
	
}

void insertNodo (arbol& raiz, int valor){
	
	if (raiz == NULL){
		
		insertNodoRaiz(raiz, valor);
		
	}
	
	else {
		
		if (valor < raiz -> num){
			
			insertNodo (raiz -> izq, valor);
		}
		else if (valor > raiz -> num){
			
			insertNodo (raiz -> der, valor);
		}
	}
	
}


int main (){
	
	arbol raiz = NULL;
	int valor;
	int opc;
	
	do{
		
		cout << endl << "------ Menu de opciones -------" << endl << endl;
		cout << "1. Insertar nodo" << endl;
		cout << endl << "Ingrese la opcion: ";
		cin >> opc;
		
		switch (opc){
			
			case 1:
				
				cout << endl << "Ingrese el numero a insertar (digite 0 para salir): ";
				cin >> valor;
				cout <<endl;
				
				if (valor != 0) {
                    	
                        insertNodo(raiz, valor);
                    }

                    cout << endl << endl;
                    
                    system ("pause");
				break;
			
			
		}

		
		
	}while (opc !=0);
	
	return 0;
}




