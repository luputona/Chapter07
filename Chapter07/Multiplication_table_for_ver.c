#include<stdio.h>

void main()
{
	int nCur = 0;
	int nIs = 0;

	for (nCur = 2; nCur < 10; nCur++)
	{
		for (nIs = 1; nIs < 10; nIs++)
		{
			printf("%d X %d = %d \n", nCur, nIs, nCur * nIs);
		}
		printf("\n");

	}

}