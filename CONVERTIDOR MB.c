#include<stdio.h>//*programa que convierta megabytes a bits,bytes,gb,kb y tb*/
#include<stdlib.h>
float BIT=8388608;
float BYTE=1048576;
float KB=1024;
float GB=0.0009766;
float TB=0.000001;
float MG;
int main()
{
	printf("convertidor de mega\n");
	printf("dame el valor del mega\n");
	scanf("%f",&MG);
	BIT=8388608*MG;
	BYTE=1048576*MG;
	KB=1024*MG;
	GB=0.0009766*MG;
	TB=0.000001*MG;
	printf("el resultado de BIT es:%f\n",BIT);
    printf("el resultado de BYTE es:%f\n",BYTE);
    printf("el resultado de KB es:%f\n",KB);
	printf("el resultado de GB es:%f\n",GB);
	printf("el resultado de TB es:%f\n",TB);
	system ("PAUSE");
	return 0;
}

