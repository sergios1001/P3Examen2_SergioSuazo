#include "Archivo.h"
#include <sstream>
using std::stringstream;

Archivo::Archivo(string pFileName){
	fileName = pFileName;
}

bool Archivo::abrirEscritura(int modo){
	modoEscritura = modo;
	if(modoEscritura == 1)
		outputFile.open(fileName.c_str(), std::ios::app);
	else
			outputFile.open(fileName.c_str());
			
	return outputFile.is_open();
}

bool Archivo::guardarMatriz(Matriz* matriz){
	if(outputFile.is_open()){
		outputFile << matriz->getID()
					<<','<< matriz->numeros<<'\n';
		return true;
	}else
		return false; 
}

bool Archivo::cerrarEscritura(){
	outputFile.close();
	return !outputFile.is_open();
}



bool Archivo::abrirLectura(){
	inputFile.open(fileName.c_str());
	return inputFile.is_open();
}

vector<Matriz*> Archivo::leerMatrices(){
	vector<Matriz*> retval;
			
	if(inputFile.is_open()){
			
		while(!inputFile.eof()){
			string numeros;
			string id1;
			//buffer para leer del archivo
			string buffer;
			//leer 1 linea o 1 registro
			getline(inputFile,buffer);
			//string stream 
			stringstream myStream;
			myStream << buffer;
	
			//cargar todos campos en variables temporales
			//id
			getline(myStream,id1,',');
			//numeros
			getline(myStream,numeros,',');
			
			
			char id = id1[0];
			retval.push_back(new Matriz(numeros,id));		
		}//end w
		return retval;
	}//end if
	else 
		return retval;
}

//cerrar archivo
bool Archivo::cerrarLectura(){
	inputFile.close();
	return !inputFile.is_open();
}

