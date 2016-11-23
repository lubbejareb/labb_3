#pragma once

#include "pq.h"

int pq(double a, double b)
{
	double temp1 = 0, temp2 = 0;
	if (((0.5*a)*(0.5*a) - b) < 0)
	{
		printf("error sqrt of negativ number\n");
		return 0;
	}
	else
	{
		temp1 = (-0.5*a) + sqrt(pow(0.5*a, 2) - b);
		temp2 = (-0.5*a) - sqrt(pow(0.5*a, 2) - b);
		printf("%f %f \n", temp1, temp2);
		return 1;
	}
}