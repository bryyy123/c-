#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s,x1,x2;
	   s=9;
	   x2=1;
	 while(s>0)
	   {
	   	x1=(x2+1)*2;
	   	x2=x1;
	   	s--;
	   }
	printf("第一天共摘了%d个桃子\n",x1);
	return 0;
}
