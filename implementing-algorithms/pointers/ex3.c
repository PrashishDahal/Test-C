// return both sum and average from the function and print it in main()

#include <stdio.h>
void sumAvg(int, int, int *, float *);
int main()
{
	int a, b, sum;
	float avg;
	a = 7;
	b = 10;
	sumAvg(a, b, &sum, &avg);
	printf("the value of sum is %d\n", sum);
	printf("the value of avg is %.2f\n", avg);

	return 0;
}
void sumAvg(int x, int y, int *sum, float *avg)
{
	*sum = x + y;
	*avg = (float)(*sum) / 2;
}
