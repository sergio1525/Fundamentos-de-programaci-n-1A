#include<stdio.h>
/*programa que sume dos variables*/
int resultado;
int N1;
int N2;
int main ()
{
	printf("Dame un numero\n");
	scanf("%d",&N1);
	printf("Dame otro numero\n");
	scanf("%d",&N2);
	resultado=N1+N2;
	printf("el resultados es, %d",resultado);
}
