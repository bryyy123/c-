#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,x0,x1;
	printf("请输入一个数a:");
	scanf("%f",&a);
	x0=a/2;
	x1=(x0+a/x0)/2;
	do
	  {
	    x0=x1;
	    x1=(x0+a/x0)/2;
	  }
	while(fabs(x0-x1)>=1e-5);
	printf("%5.2f的算术平方根是%8.5f",a,x1);  
	return 0;
}
