#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Object.h"
#include "Matriz.h"
#include "Pila.h"
#include "Node.h"
#include "Operador.h"


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

vector<Matriz*> matrices;

int main(int argc, char** argv) {
	string resp="";
	while(resp!="exit")
	{
		cout<<">>";
		cin>>resp;
		
		if(resp[1]=='=')
		{
			int size=0;
			for(int i=0;i<resp.size();i++)
			{
				if(resp[i]=='0'||resp[i]=='1'||resp[i]=='2'||resp[i]=='3'||resp[i]=='4'||resp[i]=='5'||resp[i]=='6'||resp[i]=='7'||resp[i]=='8'||resp[i]=='9')
				{
					size++;
				}
			}
			int raiz;
			raiz=sqrt(size);
			if(raiz*raiz==size)
			{
				
				int** matriz=NULL;;
				matriz=new int*[raiz];
				for(int i=0;i<raiz;i++)
				{
					matriz[i]=new int[raiz];
				}
				int k=3;
				for(int i=0;i<raiz ;i++)
				{
					for(int j=0;j<raiz;i++)
					{
						for(k;k<resp.size();k++)
						{
							if(resp[k]!=',')
							{
								matriz[i][j]=(int)resp[k];
								k++;
								break;
							}
						}
					}
				}
				matrices.push_back(new Matriz(matriz,resp[0]));
			}
			else
			{
				cout<<"la matriz no es cuadrada"<<endl;
			}
		}
		else
		{
			
		}
	}
	
	return 0;
	
	
}
