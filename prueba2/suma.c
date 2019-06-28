#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "suma.h"

#ifdef SUMA
double suma2 (double sum1, double sum2)
{
	return (sum1+sum2);
}
double suma3 (double sum1, double sum2, double sum3){
	return suma2(suma2(sum1,sum2),sum3);
}

double suma4 (double sum1, double sum2, double sum3, double sum4){
	return suma2(suma3(sum1,sum2,sum3),sum4);
}
#endif /*if (1==SUMA)*/
