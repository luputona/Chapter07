#include<stdio.h>

void main7()
{
	double nTotal = 0.0f;
	double nInput = 0.0f;
	int nNum = 0;

	for (; nInput >= 0.0;)
	{
		nTotal += nInput;
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf_s("%lf",&nInput);
		nNum++;
	}
	printf("�Է� Ƚ�� : %d\n", nNum-1);
	printf("�� �� : %f\n", nTotal);
	printf("��� : %f \n", nTotal / (nNum - 1));

}