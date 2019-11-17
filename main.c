#include <stdio.h>
#include "myMath.h"

int main()
{
	double x;
	printf("Please enter a real number:\n");
	scanf("%lf", &x);

	//Calculation and printing fx1
	float fx1 = sub(add(Exp(x),Pow(x, 3)),2);
	printf("The value of f(x) = e^x+x^3-2 at the point %0.4lf is: %0.4f\n", x, fx1);

	//Calculation and printing fx2
	float fx2 = add(mul(x, 3),mul(Pow(x, 2), 2));
	printf("The value of f(x) = 3x+2x^2 at the point  %0.4lf is:%0.4f\n", x, fx2);

	//Calculation and printing fx3
	float fx3 = sub(div(mul(Pow(x, 3), 4), 5),mul(x,2));
	printf("The value of f(x) = (4x^3/5)-2x at the point %0.4lf is:%0.4f\n", x, fx3);

}