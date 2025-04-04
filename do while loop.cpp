#include<stdio.h>
int main () {
int num=2;
	printf("sum square cube\n");
	do{
	printf("%5d %12d %14d\n" ,num,num*num,num*num*num);
	num++;
	}while (num <=10);
   return 0;	
}
