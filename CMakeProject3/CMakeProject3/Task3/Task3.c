#include <stdio.h>
#include <math.h>

float xa = 0, ya = 0, xb = 1, yb = 0, xc = 0, yc = 1;
float xd, yd;
float x, y;

double g(float xa, float ya, float xb, float yb, float xd, float yd)
{
	return (xd - xa) * (yb - ya) - (yd - ya) * (xb - xa);
}

_Bool f(float xa, float ya, float xb, float yb, float xc, float yc, float xd, float yd)
{
	return g(xa, ya, xb, yb, xc, yc) * g(xa, ya, xb, yb, xd, yd) >= 0;
}

float c(float x)
{
if (x <= 9)
			return cos(2 * x) + 9;
		else
			return (-cos(x)) / (x - 9);
}

void main()
{
	switch (getch())
	{
	case '1':
		printf("Task1\n");
		scanf("%f\n", &xd);
		scanf("%f\n", &yd);
		if (f(xa, ya, xb, yb, xc, yc, xd, yd) && f(xb, yb, xc, yc, xa, ya, xd, yd) &&
			f(xc, yc, xa, ya, xb, yb, xd, yd) != 0)
			printf("Yes, 1st quarter\r\n");
		else if (xd < 0 && xd >= -1 && yd < 0 && yd >= -1)
			printf("Yes, 3rd quarter\r\n");
		else
			printf("No");
		system("Pause");
		break;
	case '2':
		printf("Task2\n");
		scanf("%f\n", &x);
		printf("x=%f\n", x);
		printf("y=%f\n", c(x));
		system("Pause");
		break;
	default:
		printf("Invalid parameter");
		system("Pause");
		break;
	}
}