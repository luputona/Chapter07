#include <stdio.h>

void main6()
{
	int nTotal = 0;
	int i;
	int nNum = 0;

	printf("0���� num������ ���� , num ��? : ");
	scanf_s("%d", &nNum);

	for (i = 0; i < nNum + 1; i++)
	{
		nTotal += i;
	}

	printf("0���� %d���� ������� : %d \n", nNum, nTotal);

}