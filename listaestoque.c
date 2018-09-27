#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct produto
{
    int qntdestoque;
    double preco;
    struct produto *prox;
}Prod;

typedef struct Lista
{
    Prod *inicio;
    Prod *fim;
}Lista;

void iniciarlistaprod(Lista *prodlista)
{
    prodlista->inicio = NULL;
    prodlista->fim = NULL;
}

void inserir(Lista *prodlista)
{
    Prod *novoproduto;
    novoproduto = (struct produto *) malloc(sizeof(Prod));

}