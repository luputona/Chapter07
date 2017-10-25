#include<stdio.h>

void main4()
{
	int nIs = 0;
	int nCur = 2;

	while (nCur < 10)
	{
		nIs = 1;
		while (nIs < 10)
		{
			printf("%d X %d = %d\n", nCur, nIs, nCur * nIs);
			nIs++;
		}
		nCur++;
		printf("\n");
	}


}