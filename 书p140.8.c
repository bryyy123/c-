#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,k,n;
	printf("ˮ�ɻ�����:");
	 for(n=100;n<1000;n++)
	   {i=n/100;
	    j=(n-100*i)/10;
	    k=n-100*i-10*j;
	    if(n==i*i*i+j*j*j+k*k*k)
	      printf("%d ",n);
	   }
	   printf("\n");
	return 0;
}
