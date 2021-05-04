#include "read_file.h"
#include "calculation.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main(void)
{
	int num, num1;
	FILE *fp = fopen("Final_Map.map", "r");
   printf("Please input the id of start and end points: (separated by a blank)");
   scanf("%d %d", &num, &num1);
   read_file(fp);
   store_data();
   write_file();
   disjstla(num, num1);
   showPath(num, num1);
}
