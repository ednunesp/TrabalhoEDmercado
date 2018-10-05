#include <stdio.h>
#include <stdlib.h>

int const MAXTAM=1000; (inalterado)

int Frente, Tras;
int Fila[MAXTAM];


int clientesporsegundo (int clientes){
	int i=0;
	int client=0;
	int clientestotal =0;

	for (i=0;i<=clientes;i++){
		while (client != i){
			client++;
			clientestotal = client; //enquanto o valor de cliente nao for satisfeito (?), os valores continuam a entrar e os clientes continuam rodando. preciso dos dados da lista de produtos, para atribuir aos clientes
		}
	}
}

//no caso precisa apenas chamar essa função que ela já coloca em um timer especifico. apenas chamr ela dentro de um loop resolve ex: enquanto clientes != 0, continua chamando o valor x
void timer (float tempo) { //temporizador

   if (tempo<0.001) return; // pode ser ajustado e/ou evita-se valores negativos.

   float in1=0, in2=0; //instante 

   in1 = (float)clock()/(float)CLOCKS_PER_SEC; //

   while (in2-in1<tempo) inst2 = (float)clock()/(float)CLOCKS_PER_SEC;

   return; //no caso é só chamar a função com os valores 

}

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
	if(Tras==MAXTAM-1){
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



int main (int argc, char *argv[]){
	scanf("%d %d", &clientes, &tempo);
	clientesporsegundo (clientes);
	timer(tempo);

	Fila_Construtor();

	Fila_Espera(valor de clientes por segundo com os itens);
	Fila_Espera(valor de clientes por segundo com os itens);
	Fila_Espera(valor de clientes por segundo com os itens);

	if (Fila_atendimento(valor)){

	printf("\n\n Cliente %d, com produtos %d sendo atendido\n\n", &numerodocliente, &numerodoproduto);
}
	else{
		printf("\n\nFila vazia. Não existe clientes.\n");
	}
	return 0;
}