#include <stdio.h>

double Exp(int x)
{
	double e = 2.718281828;
	double ans = 2.718281828;
	for  (int i = 1; i < x ; i++)
	{
		ans *= e;
	}
	return ans;
}

double Pow(double x, int y)
{
	double t = x;
	if (y <= 0)
	{
		if (y == 0)
		{
			return x;
		}
		else
		{
			printf("Must enter a positive number\n");
			return -1;
		}
	}
	for (int i = 1; i < y; i++)
	{
		t *= x;
	}
	return t;
}