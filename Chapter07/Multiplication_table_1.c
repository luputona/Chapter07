#include<stdio.h>

void main2()
{
	int nInput = 0;
	int nNum = 1;

	printf("¸î´Ü?: ");
	scanf_s("%d", &nInput);

	while (nNum < 10)
	{
		printf("%d X %d = %d\n", nInput, nNum, nInput * nNum);
		nNum++;
	}

}