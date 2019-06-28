/** @file main.c
 * @brief This file contain a code test for file.
 *
 * The main idea is to include most of the types defined for doxygen
 * to standard ANSI C document a file.
 *
 * @author Adbeel Alejandro Pérez (aaperez)
 * @bug No documented bugs.
 * @version 1.0.0.1 -- 2007-07-20
 * @version 1.0.0.2 -- 2007-08-02
 * - Fixes this
 * - Fixes that
 * - Fixes the other
 * @date  2018
 * @pre  Initalyzing the system.
 * @warning Improper use can crash your application
 * @copyright GNU Public License.
 */


#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "suma.h"
#include "resta.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("programa de resultados para una calculadora \n \n");
	#ifdef SUMA
	{
		double var1=1;	
		double var2=1;
		double var3=suma2(var1,var2);
		double var4=suma2(var2,var3);
		double var5=suma2(var3,var4);
		printf("result= %f,%f,%f,%f \n \n",var1,var2,var3,var4);
	}
	#endif
	#ifdef RESTA
	{
		double var1=1;	
		double var2=1;
		double var3=resta2(var1,var2);
		double var4=resta2(var2,var3);
		double var5=resta2(var3,var4);
		printf("result= %f,%f,%f,%f \n\n",var1,var2,var3,var4);
	}
	#endif
}


