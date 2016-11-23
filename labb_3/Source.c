
#include <stdio.h>	//Behövs för printf() funktionen 
#include <stdlib.h> //Behövs för system()funktionen
#include <time.h>	//tillåter oss att använda time()
#include <math.h>	//tillåter oss att använda sqrt()
#include "prim.h"
#include "pq.h"
#pragma warning(disable:4996)
#define ArraySize 1000
float gold(void);

int main(void)
{
	double Au = 0;
	double Ptest = 0, Qtest = 0, p = 0.0, q = 0.0;
	printf("%f\n", gold());


	printf("write p then q\n");
	scanf_s("%lf", &Ptest);
	scanf_s("%lf", &Qtest);
	pq(Ptest, Qtest);
	
	for (int i = 0; i < 9000; i++)
	{
		if (prim(i) == 1)
		{
			printf("%d is perfekt \n", i);
		}
	}
	int perfekt = 0;
	printf("\n\nskriv ett primtal eller inte");
	scanf_s("%d", &perfekt);


	system("pause");
	return 0;

}

float gold(void)
{
	double x;
	x = (1 + sqrt(5)) / 2 ;

	return x;
}



