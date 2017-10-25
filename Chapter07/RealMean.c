#include<stdio.h>

void main7()
{
	double nTotal = 0.0f;
	double nInput = 0.0f;
	int nNum = 0;

	for (; nInput >= 0.0;)
	{
		nTotal += nInput;
		printf("½Ç¼ö ÀÔ·Â(minus to quit) : ");
		scanf_s("%lf",&nInput);
		nNum++;
	}
	printf("ÀÔ·Â È½¼ö : %d\n", nNum-1);
	printf("ÃÑ ÇÕ : %f\n", nTotal);
	printf("Æò±Õ : %f \n", nTotal / (nNum - 1));

}