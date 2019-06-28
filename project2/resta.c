#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "resta.h"

#ifdef RESTA
double resta2 (double rest1, double rest2)
{
	return (rest1-rest2);
}
double resta3 (double rest1, double rest2, double rest3){
	return resta2(resta2(rest1,rest2),rest3);
}

double resta4 (double rest1, double rest2, double rest3, double rest4){
	return resta2(resta3(rest1,rest2,rest3),rest4);
}
#endif /*if (1==RESTA)*/
