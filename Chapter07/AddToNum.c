#include <stdio.h>

void main6()
{
	int nTotal = 0;
	int i;
	int nNum = 0;

	printf("0부터 num까지의 덧셈 , num 은? : ");
	scanf_s("%d", &nNum);

	for (i = 0; i < nNum + 1; i++)
	{
		nTotal += i;
	}

	printf("0부터 %d까지 덧셈결과 : %d \n", nNum, nTotal);

}