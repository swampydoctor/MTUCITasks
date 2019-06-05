#include <stdio.h>
#include <math.h>

void main()
{
	double x =10;
	printf("x=%g\n", x);
	if (x <= 9)
		printf ("y=%g\n", cos(2 * x) + 9);
	else 
	printf("y=%g\n",(-cos(x)) / (x - 9));
	system("pause");
}