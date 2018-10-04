#include <stdio.h>
#include <stdlib.h>

int const MAXTAM=1;

int Frente, Tras;
int Fila[MAXTAM];

void Fila_Construtor(){
	Frente = 0;
	Tras=-1;

}

bool Fila_Vazia(){
	if (Frente>Tras){
		return true;
	}
	else{
		return false;
	}
}

bool Fila_Cheia(){
	if (Tras==MAXTAM-1){
		return true;
	}
	else{
		return false;
	}
}

bool Fila_Espera(int &valor){
	if (Fila_Cheia()){
		return false;
	}
	else {
		Tras++;
		Fila[Tras]=valor;
		return valor;
	}
}

bool Fila_atendimento(int &valor){
	if (Fila_Vazia()){
		return false;
	}
	else{
		valor=Fila[Frente];
		Frente++;
		return true;
	}
}

int Fila_Tamanho (){
	return  (Tras-Frente)+1;
}

int main (){
	Fila_Construtor();

	Fila_Espera(5);
	Fila_Espera(2);
	Fila_Espera(7);

	if (Fila_atendimento(valor)){

	printf("\n\n Valor: %d\n\n",  );
}
	else{
		printf("\n\nFila vazia\n");
	}
	return 0;
}