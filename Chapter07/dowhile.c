#include<stdio.h>

void main3()
{
	int nInput = 0;
	int num = 1;

	printf("¸î´Ü?:");
	scanf_s("%d",&nInput);

	do
	{
		printf("%d X %d = %d \n",nInput,num, nInput * num);
		num++;
	} while (num < 10);
	
	

}