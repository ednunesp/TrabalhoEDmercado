#include <stdio.h>
#include <stdlib.h>

//stdlib para alocação dinamica

typedef struct ponto
{
	int x, y;
	struct ponto * proximo;
}t_ponto;

int main (int argc, char*argv[]){

	//para marcar o inicio e o prox elemento
	t_ponto * inicio;
	t_ponto * proximo;

	inicio = (t_ponto*)malloc (sizeof (t_ponto));
	//retorna o tamanho do tipo, e malloc retorna null se nao alocar

	if (inicio == NULL){
		return 0;
	}

	proximo=inicio;


	//enquanto a pessoa quiser entrar com os dados, no caso o timer 
	while(1){

		scanf("%d", &clientenovo -> x);
		scanf("%d", &clientenovo -> y);
		tempo();
		produto();
		//vai ser a função de tempo e produto
		while ((tempo != 0) && (produto!=)){
			clientenovo->proximo = (t_ponto *)malloc(sizeof(t_ponto));
			clientenovo = clientenovo->proximo;
			//basicamente vai ser uma função teste para chegar se ainda há clientes e produtos e se deve continuar fazendo fila
		}

	}
	clientenovo->proximo==NULL; // clientenovo->proximo = NULL;
	clientenovo = inicio;
	while
		{proximo!=NULL}{
			printf("x %d, y%d \n",clientenovo->x, clientenovo->y );
			clientenovo = clientenovo->proximo;
			//ele vai continuar apontando para o proximo cliente e mostrando a fila. no caso, agora é só implementar nos caixas
			
		}

}