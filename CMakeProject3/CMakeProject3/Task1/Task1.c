#include <stdio.h>
#include <math.h>

double g(double xa, double ya, double xb, double yb, double xd, double yd)
{
	return (xd - xa) * (yb - ya) - (yd - ya) * (xb - xa);
}

_Bool f(double xa, double ya, double xb, double yb, double xc, double yc, double xd, double yd)
{
	return g(xa, ya, xb, yb, xc, yc) * g(xa, ya, xb, yb, xd, yd) >= 0;
}

void main()
{
	double xa=0, ya=0, xb=1, yb=0, xc=0, yc=1, xd=2, yd=1;
	printf("x=%g\n",xd); 
	printf("y=%g\n",yd);
	if (f(xa, ya, xb, yb, xc, yc, xd, yd) && f(xb, yb, xc, yc, xa, ya, xd, yd) &&
		f(xc, yc, xa, ya, xb, yb, xd, yd) != 0)
		printf("Yes, 1st quarter\r\n");
	else if(xd < 0 && xd >= -1 && yd < 0 && yd >= -1)
		printf("Yes, 3rd quarter\r\n");
	else
		printf("No\r\n");
	system("pause");
}
