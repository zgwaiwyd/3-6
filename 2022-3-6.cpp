#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#include  <stdio.h>
double f1(double  x)
{
	return  x * x;
}
double f2(double x, double y)
{
	return  x * y;
}
double fun(double  a, double  b)
{
	/**********found**********/
	double (*f)();
	double  r1, r2;
	/**********found**********/
	f = f1;
	r1 = f(a);
	/**********found**********/
	f = f2;
	r2 = (*f)(a, b);
	return  r1 + r2;
}
void main()
{
	double  x1 = 5, x2 = 3, r;
	r = fun(x1, x2);
	printf("\nx1=%f,  x2=%f,  x1*x1+x1*x2=%f\n", x1, x2, r);
}

