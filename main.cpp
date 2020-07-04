#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Object.h"
#include "Matriz.h"
#include "Pila.h"
#include "Node.h"
#include "Operador.h"
#include "Archivo.h"


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void printMat(int** matriz,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"| ";
		for(int j=0;j<size;j++)
		{
						
			cout<<matriz[i][j]<<" ";
		}
		cout<<"|"<<endl;
	}
}

vector<Matriz*> matrices;
Archivo* miMatriz = new Archivo("Matrices.txt");

int main(int argc, char** argv) {
	string resp="";
	miMatriz->abrirLectura();
	matrices= miMatriz->leerMatrices();
	miMatriz->cerrarLectura();
	while(resp!="exit")
	{
		cout<<">>";
		cin>>resp;
		
		if(resp[1]=='=')
		{
			int size=0;
			string numMat="";
			for(int i=0;i<resp.size();i++)
			{
				if(resp[i]=='0'||resp[i]=='1'||resp[i]=='2'||resp[i]=='3'||resp[i]=='4'||resp[i]=='5'||resp[i]=='6'||resp[i]=='7'||resp[i]=='8'||resp[i]=='9')
				{
					size++;
					numMat+=resp[i];
				}
			}
			int raiz;
			raiz=sqrt(size);
			if(raiz*raiz==size)
			{
				Matriz* m=new Matriz(numMat,resp[0]);
				int** matriz=m->getMat();
				printMat(matriz,raiz);
				matrices.push_back(m);
				miMatriz->abrirEscritura(1);
				miMatriz->guardarMatriz(m);
				miMatriz->cerrarEscritura();
					
			}
			else
			{
				cout<<"la matriz no es cuadrada"<<endl;
			}
		}
		else if(resp[1]=='+'||resp[1]=='-'||resp[1]=='*')
		{
			
			/*Pile* pila=new Pila();
			for(int i=1;i<resp.size();i++)
			{
				
				Node nodo= new Node()
				pila->push()
			}*/
		}
	}
	
	return 0;
	
	
}
