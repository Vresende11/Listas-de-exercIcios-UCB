#include <stdio.h>//conjunto de bibliotecas para saida, entrada e fun��es
#include <stdlib.h>

int main(void){//fun�a� principal do programa
/*variaveis array primeiro cochete para quantas variaveis ser�o alocadas
segundo cochetes para quantidade de caracteres de cada variavel*/
char array[4][50];
/*variavel array que aloca tr�s variaveis float */
float array2[3];

/*sistema para receber informa��o do usuario*/
printf("Digite seu primeiro nome: ");
scanf("%s", array[1]);
printf("Digite seu sobrenome: ");
scanf("%s", array[2]);
printf("Digite seu genero: ");
scanf("%s", array[3]);
printf("Digite seu numero de matricula: ");
scanf("%s", array[4]);
printf("Digite o valor que sera recebido por hora: ");
scanf("%f", &array2[1]);
printf("Digite as horas trabalhadas: ");
scanf("%f", &array2[2]);

//equa��o para calcular o salario que sera recebido
array2[3] = array2[1] * array2[2];

//mostra pro usuario todas as informa��es que foram digitadas e calculadas
printf("\n**********todos os dados**********\n");
printf("\nNome do usuario: %s %s", array[1], array[2]);
printf("\ngenero: %s", array[3]);
printf("\nNumero da matricula: %s", array[4]);
printf("\nO valor da hora de trabalho: %.2f", array2[1]);
printf("\nHoras trabalhadas: %.2f", array2[2]);
printf("\nO salario total do usuario: %.2f\n",array2[3]);
 
system("pause");
return 0;
}
