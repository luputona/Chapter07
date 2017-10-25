#include<stdio.h>

void main5()
{
	int nInput = 0;
	int nTotal = 0;

	do
	{
		printf("정수 입력(0 to quit):");
		scanf_s("%d", &nInput);
		nTotal += nInput;
	} while (nInput != 0);

	printf("합계 : %d \n", nTotal);

}