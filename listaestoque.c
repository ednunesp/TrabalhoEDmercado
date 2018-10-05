#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct produto
{
    int identificador;
    int qntdestoque;
    double preco;
    struct produto *prox;
}Prod;

typedef struct Lista // cria o inicio da lista
{
    Prod *inicio;
    Prod *fim;
}Lista;

void iniciarlistaprod(Lista *listaproduto) // inicializa a lista vazia
{
    listaproduto->inicio = NULL;
    listaproduto->fim = NULL;
}

void inserir(Lista *listaproduto) // funcao que insere elementos na lista
{
    Prod *novoproduto;
    novoproduto = (struct produto *) malloc(sizeof(Prod));
    printf("Insira o produto (identificador e preco) \n");
    scanf("%d %d %lf", &novoproduto->identificador, &novoproduto->qntdestoque, &novoproduto->preco); // pega as informacoes da struct e passsa pro vetor de structs
    novoproduto->prox = NULL;

    if (listaproduto->inicio == NULL)
    {
        listaproduto->inicio = novoproduto;
    }
    else
    {
        listaproduto->fim->prox = novoproduto;    
    }
}

void imprimelista(Lista *listaproduto) //nao sei se vai precisar imprimir a lista, por garantia ta aqui a parte do codigo que imprime a lista
{
    Prod *aux;
    if (listaproduto->inicio == NULL)
    {
        printf("\n ---------------FIM DOS ITENS DO ESTOQUE--------------- \n");
        return;
    }
    else
    {
        aux = listaproduto->inicio;
        
        do
        {
            printf("\n Identificador do Produto: %d, Preco do Produto: %->2f, Quantidade disponivel no Estoque: %d", aux->identificador);
        } while (aux != listaproduto->inicio);

        printf("\n ---------------FIM DOS ITENS DO ESTOQUE--------------- \n");
        getchar();
    }
}

void consultaproduto(Lista *listaproduto) // Consulta na lista se o produto existe, e sua quantidade no estoque
{
    if (listaproduto->inicio == NULL)
    {
        printf("\n ---------------FIM DOS ITENS DO ESTOQUE--------------- \n");
    }
    else
    {
        Prod *aux;
        int pesquisa;
        int achou = 0;
        
        printf("\n Informe o Identificador do Produto: ");
        scanf("%d\n", &pesquisa);

        aux = listaproduto->inicio;
        do
        {
            if (aux->identificador == pesquisa)
            {
                printf("Quantidade em Estoque: %d", aux->identificador);
                achou = 1;
                
            }
            else
            {
                aux = aux->prox;
            }
        }while (aux != listaproduto->inicio && achou == 0);
        if (achou == 0)
        {
            printf("\n Produto nao encontrado");
        }
        getchar();
    }
}

void retirarproduto(Lista *listaproduto)
{
    if (listaproduto->inicio == NULL)
    {
        printf("\n ---------------FIM DOS ITENS DO ESTOQUE--------------- \n");
    }
    else
    {
        Prod *atual, *anterior;
        int pesquisa;

        printf("\n Informe o Identificador do Produto:");
        scanf("%d", &pesquisa);

        //Se a lista de produtos nao estiver vazia
        atual = listaproduto->inicio;
        anterior = listaproduto->inicio; //minuto 12:07 video do youtube
        
        do
        {
            if (atual->identificador == pesquisa)
            {
                //se o produto estiver no inicio da lista
                if (atual == listaproduto->inicio)
                {
                    listaproduto->inicio = atual->prox;
                    listaproduto->fim->prox = atual->prox;
                    free (atual);
                    break;
                }
                else // se nao for o primeiro produto
                {
                    anterior = atual;
                    atual = atual->prox;
                }
            }
        }while (atual != listaproduto->inicio);
    }
}

//main
int main()
{
    int opcao;
    Lista listadeproduto;
    iniciarlistaprod(&listadeproduto);

    do
    {
        printf ("Opcoes:\n\n");
        printf ("1- Inserir novo produto \n");
        printf ("2- Consultar produto \n");
        printf ("3- Remover produto \n");
        printf ("4- Listar todos produtos\n");
        printf ("0- Fechar programa \n");
        scanf ("%d", &opcao); 
        switch(opcao)
        {
            case 1: 
                inserir(&listadeproduto);
                break;
            case 2: 
                consultaproduto(&listadeproduto); 
                break;
            case 3: 
            	retirarproduto(&listadeproduto);
                break;
            case 4:
                imprimelista(&listadeproduto);
                break;
            case 0: return 0;
        }
    }while(opcao != 0);
}