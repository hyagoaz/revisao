
/* =========================================================================
	======
	======	By: Hyago Azzolim  Aguirre 19/08/2016
	======
	======	calculo fatorial.c aluno de sistema de informaçao 2º semestre
	======
	======
	========================================================================
*/

#include <stdio.h>
 
int main()
{
float fat, n,resultado=1;//variaveis n: numero : fat laço de repetiçao
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%f", &n);
 
for (fat=1;fat<n;fat++)
{
	resultado = fat * (n+1);z
	printf ("\npasso %f, resultado = %i", fat , resultado);
	
}

 
printf("\nFatorial calculado: %f", resultado);
return 0;
}
