#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

//flamengo é pessimo
//jogar foraaaaa
//jogar fora doisssssssssssss
//teste primario

int main()
{
    setlocale(LC_ALL, "Portuguese");


    float total, quantidade, parcelas, total_parcelas, valor_recebido, troco,desconto, valor_sem_desconto; //VARIAVEIS DO TIPO FLOAT
    int opc,opcao,sair2 = 0; //VARIAVEIS DO TIPO INTEIRO
    char str1[20],str2[20];

    strcpy(str1, "Sim"); //Pre selecionando a string como SIM para continuar o loop.

    do{ //loop do while
    system("cls");
    printf("\t\t\t\t---------- Catalogo Padaria ----------\n\n");
    printf("\t\t\t\t1 - Pão de forma ------ R$7,50\n");
    printf("\t\t\t\t2 - Pão de centeio ---- R$8,69\n");
    printf("\t\t\t\t3 - Broa de milho ----- R$5,00\n");
    printf("\t\t\t\t4 - Sonho ------------- R$4,50\n");
    printf("\t\t\t\t5 - Tubaína ----------- R$3,25\n\n");
    printf("\t\t\t\t------Selecione a opção desejada: ");

    scanf("%d",&opc); //ARMAZENANDO A VARIAVEL OPC Q SERÁ USADA PARA ENTRAR NO SWITCH
    getchar(); /*Quando for necessário realizar a entrada de um único caractere pode ser utilizado
    esta função. Ela lê um caractere do terminal e devolve o código ASCII do mesmo.*/

    if(opc >=6){
        printf("\n\t\t\t\tDigite um item válido! \n\t\t\t\t---->");
        scanf("%d",&opc);
    }

    system("cls"); //limpar a tela

    switch(opc)
    {
    case 1:
        printf("\t\t----------Você selecionou Pão de forma----------\n\n");
        printf("\t\tQual seria a quantidade desejada? ");
        scanf("%f",&quantidade);
        getchar();

        total=quantidade*7.50; //calculando o valor quantidade*item
        system("cls"); //limpando tela

        printf("\t\tO valor total foi de R$%.2f\n\n",total);
        printf("\t\t--------------------------\n",opcao);
        printf("\t\t(1) Parcelar - 5%% de Juros \n\t\t(2) A vista - 10%% de Desconto\n",opcao);
        printf("\n\t\tQual seria a Forma de Pagamento? ",opcao);

        scanf("%d",&opcao); //opcao é para selecionar a forma de pagamento entrando nos ifs
        getchar();

        system("cls");
    break; //evita testar as demais alternativas de forma desnecessaria quando uma opc verdadeira ja foi encontrada


    case 2:
        printf("\t\t----------Você selecionou Pão de centeio----------\n\n");
        printf("\t\tQual seria a quantidade desejada? ");
        scanf("%f",&quantidade);
        getchar();

        total=quantidade*8.69;
        system("cls");

        printf("\n\t\tO valor total foi de R$%.2f\n\n",total);
        printf("\t\t--------------------------\n",opcao);
        printf("\t\t(1) Parcelar - 5%% de Juros \n\t\t(2) A vista - 10%% de Desconto\n",opcao);
        printf("\n\t\tQual seria a Forma de Pagamento? ",opcao);

        scanf("%d",&opcao);
        getchar();
        system("cls");
    break;


    case 3:
        printf("\t\t----------Você selecionou Broa de Milho----------\n\n");
        printf("\t\tQual seria a quantidade desejada? ");
        scanf("%f",&quantidade);
        getchar();

        total=quantidade*5;
        system("cls");

        printf("\n\t\tO valor total foi de R$%.2f\n\n",total);
        printf("\t\t(1) Parcelar - 5%% de Juros \n\t\t(2) A vista - 10%% de Desconto\n",opcao);
        printf("\n\t\tQual seria a Forma de Pagamento? ",opcao);

        scanf("%d",&opcao);
        getchar();
        system("cls");
    break;


    case 4:
        printf("\t\t----------Você selecionou Sonho----------\n\n");
        printf("\t\tQual seria a quantidade desejada? ");
        scanf("%f",&quantidade);
        getchar();

        total=quantidade*4.50;
        system("cls");

        printf("\n\t\tO valor total foi de R$%.2f\n\n",total);
        printf("\t\t(1) Parcelar - 5%% de Juros \n\t\t(2) A vista - 10%% de Desconto\n",opcao);
        printf("\n\t\tQual seria a Forma de Pagamento? ",opcao);

        scanf("%d",&opcao);
        getchar();
        system("cls");
    break;


    case 5:
        printf("\t\t----------Você selecionou Tubaina----------\n\n");
        printf("\t\tQual seria a quantidade desejada? ");
        scanf("%f",&quantidade);
        getchar();

        total=quantidade*3.25;
        system("cls");

        printf("\n\t\tO valor total foi de R$%.2f\n\n",total);
        printf("\t\t(1) Parcelar - 5%% de Juros \n\t\t(2) A vista - 10%% de Desconto\n",opcao);
        printf("\n\t\tQual seria a Forma de Pagamento? ",opcao);

        scanf("%d",&opcao);
        getchar();
        system("cls");
    break;

    }

    if (opcao == 1){ //selecionado o 1 é o sistema de parcelas
        printf("\n\tO valor total foi de R$%.2f  (Sem Acréscimo) \n\n",total);
        printf("\tQual a quantidade de parcelas? ");
        scanf("%f",&parcelas);
        getchar();

        total_parcelas=(total*1.05)/parcelas;

        printf("\n\t|------------------NOTA-------------------|\n\n");\
        printf("\t|O valor a prazo ficou: R$%.2f\n",total_parcelas);
        printf("\t|O valor total das parcelas ficou: R$%.2f\n\n",total*1.05);
        printf("\t|-----------------------------------------|\n");


    }
    if(opcao == 2)
        {
        printf("\n\tO valor total foi de R$%.2f (Sem desconto) \n\n",total);
        printf("\tInsira seu dinheiro: ");
        scanf("%f",&valor_recebido);
        getchar();

        valor_sem_desconto=total*0.10;
        desconto=total-valor_sem_desconto;
        troco=valor_recebido-desconto;

        system("cls");
        printf("\n\t|------------------NOTA-------------------|\n\n");\
        printf("\t|Total com desconto: R$%.2f\n",desconto);
        printf("\t|Valor entregue: R$%.2f\n",valor_recebido);
        printf("\t|Troco: R$%.2f\n\n",troco);
        printf("\t|-----------------------------------------|\n");
        if(troco<0){
            printf("\n\t--__-- Ficou faltando R$%.2f --__--\n",troco);
        }
    }
        printf("\n\n\tDeseja continuar comprando?\n\n\t( Sim )\n\t( Não )");
        printf("\n\t-----> ");

        scanf("%s",&str2); //usario insere um valor para a variavel string (str2)
        sair2 = strcmp(str1,str2); //Compara a string dada pelo usuario com a string fixada pelo dev (str1 == str2?) Sim: 0 -- Não: 1

    }while(sair2 !=1); //se as strings baterem, retornarao 0. Caso contrario, 1
    printf("\n\n\t--------Fechando Sistema de Compras--------\n\n");
    return 0;
    }



