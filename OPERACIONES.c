#include<stdio.h>//programa que haga las cuatro operaciones//
float suma;
float resta;
float multiplicacion;
float division;
float x1;
float x2;
int main()
{
	printf("operaciones basicas\n");
	printf("dame un numero\n");
	scanf("%f",&x1);
	printf("dame otro numero\n");
	scanf("%f",&x2);
	 suma=x1+x2;
	 resta=x1-x2;
	 multiplicacion=1*x2;
	 division=x1/x2;
     printf("el resultado de la suma es:%f\n",suma);
	printf("el resultado de la resta es:%f\n",resta);
	printf("el resultado de la multiplicacion es:%f\n",multiplicacion);
	printf("el resultado de la division es:%f\n",division);
}system("PAUSE");
