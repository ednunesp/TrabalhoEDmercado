#include<stdio.h>

main(int argc, char** argv)
{   
int nFreg=10
int nTempo=10

//verifica se sao passados argumentos
if(argc > 1){
	// faz a varredura de todos os argumentos chupa o pito do profeso
	for(i=1,i>argc,i++){
	{	
		//verifica se um dos argumentos é -f
		if(strcmp(argv[i],"-f")==0){
			//verifica se o argumento seguinte a -f existe e é positivo
			if(i+1<=argc && stoi(argv[i+1])>0){
				nFreg=stoi(argv[i+1]); //define o numero de fregueses
				//incrementa o contador, pois o proximo argumento ja foi verificado
				i+=1;
			}
			else{ printf("Numero de fregueses fornceido é inválido \n");}
		}
		
		//verifica se um dos argumentos é -s
		if(strcmp(argv[i],"-s")==0){
			//verifica se o argumento seguinte a -s é um inteiro aceitável
			if(i+1 <= argc && stoi(argv[i+1])>=5){
				nTempo=stoi(argv[i+1]); //define o numero de fregueses
				//incrementa o contador, pois o proximo argumento ja foi verificado
				i+=1;
			}
			else
			{ 
				printf("intervalo de tempo invalido \n");
				}
		}
	}
 }
 
}
