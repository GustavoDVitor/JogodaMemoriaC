
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <time.h> 
#include<unistd.h>
void cabec (void)
{
	
	printf("*******************************************\n");
	printf("*              MENU INICIAL               *\n");
	printf("*******************************************\n");
	return;
}
int opcao; 

int main(void){
int i = 0, j = 0, acertos = 0;
    char c;
    int numeros[5];
    int respostas[5];
	
	 
	cabec();
    printf("\n\nESCOLHA UMA OPCAO: \n\n");
	printf("1-JOGAR\n\n");
    printf("2-RANKING\n\n");
    printf("3-SAIR\n\n");
    printf("\n\nOPCAO: ");
	scanf("%d", &opcao);
    
   switch (opcao){
   	
   	case 1:
   		system("clear");
   		//comando de regionalização
    setlocale(LC_ALL, "Portuguese");
    
    srand(time(NULL));//semente para gerar os números aleatórios
   
    printf ("\n\nEste programa irá gerar 5 números aleatórios entre 1 e 50.\n\n");
    printf ("Você deve decorar os números exibidos em 5 segundos e depois escreve-los na\nordem em que foram exibidos.\n\n");
    /*printf ("Pressione ENTER para iniciar");
     do{
       c = getch(); //enter do usuario (Não funcionou no Replit)
    }while (c != 13);  //enquanto não digitar enter não procegue*/
    for (i=0;i<5;i++){
        numeros[i] = (rand() % 50)+1; // numeros entre 0 e 49 + 1
    }
    
    j=5;
    
    do{
        system("clear");// system("cls");
        printf ("Decore os numeros abaixo em %d\n\n\n", j);
        j--;
        for (i=0;i<5;i++){
            printf ("%d\t", numeros[i]);
        }
        sleep (0001);
    }while (j>0);
    
    system("clear"); // system("cls");
    printf ("Informe os números que foram exibidos\n\n");
    
    for (i=0;i<5;i++){
        printf ("\t%d° número: ", i+1);
        scanf ("%d", &respostas[i]);
        if (respostas[i]==numeros[i]){
            acertos++;
        }
    }
    
    if (acertos==5){
        printf ("\n\nParabéns! Sua memória é muito boa. Veja os número exibidos:\n\n\t");
        for (i=0;i<5;i++){
            printf ("%d\t", numeros[i]);
        }
    }
    else
    {
        printf ("\n\nQue pena! Sua memória não é muito boa. Veja os número exibidos:\n\n\t");
        for (i=0;i<5;i++){
            printf ("%d\t", numeros[i]);
        }
    }
    printf ("\n\n");
    system ("pause");
    return 0;
    
    case 2:
		break;
	
}
   }

   
   
   
   /* Abaixo sem adaptar para o Replit
   
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

void cabec (void)
{
	
	printf("*******************************************\n");
	printf("*              MENU INICIAL               *\n");
	printf("*******************************************\n");
	return;
}
int opcao; 

int main(void){
int i = 0, j = 0, acertos = 0;
    char c;
    int numeros[5];
    int respostas[5];
	
	 
	cabec();
    printf("\n\nESCOLHA UMA OPCAO: \n\n");
	printf("1-JOGAR\n\n");
    printf("2-RANKING\n\n");
    printf("3-SAIR\n\n");
    printf("\n\nOPCAO: ");
	scanf("%d", &opcao);
    
   switch (opcao){
   	
   	case 1:
   		system("cls");
   		//comando de regionalização
    setlocale(LC_ALL, "Portuguese");
    //título do programa
    SetConsoleTitle("Jogo da memoria simples");
    
    srand(time(NULL));//semente para gerar os números aleatórios
   
    printf ("\n\nEste programa irá gerar 5 números aleatórios entre 1 e 50.\n\n");
    printf ("Você deve decorar os números exibidos em 5 segundos e depois escreve-los na\nordem em que foram exibidos.\n\n");
    printf ("Pressione ENTER para iniciar");
     do{
        c = getch();// enter do usuario
    }while (c != 13); // enquanto não digitar enter não procegue
    
    for (i=0;i<5;i++){
        numeros[i] = (rand() % 50)+1; // numeros entre 0 e 29 + 1
    }
    
    j=5;
    
    do{
        system ("cls");
        printf ("Decore os numeros abaixo em %d\n\n\n", j);
        j--;
        for (i=0;i<5;i++){
            printf ("%d\t", numeros[i]);
        }
        Sleep (1000);
    }while (j>0);
    
    system ("cls");
    printf ("Informe os números que foram exibidos\n\n");
    
    for (i=0;i<5;i++){
        printf ("\t%d° número: ", i+1);
        scanf ("%d", &respostas[i]);
        if (respostas[i]==numeros[i]){
            acertos++;
        }
    }
    
    if (acertos==5){
        printf ("\n\nParabéns! Sua memória é muito boa. Veja os número exibidos:\n\n\t");
        for (i=0;i<5;i++){
            printf ("%d\t", numeros[i]);
        }
    }
    else
    {
        printf ("\n\nQue pena! Sua memória não é muito boa. Veja os número exibidos:\n\n\t");
        for (i=0;i<5;i++){
            printf ("%d\t", numeros[i]);
        }
    }
    printf ("\n\n");
    system ("pause");
    return 0;
    
    case 2:
		break;
	
}
   }
*/