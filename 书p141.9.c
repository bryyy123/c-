#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,i;
	for(a=2;a<1000;a++)
	   {b=0;
	       for(i=1;i<a;i++)
	          if((a%i)==0)
	            b=b+i;
	        if(b==a)
	          {
			   printf("%d its factors are ",a);
	              for(i=1;i<a;i++)
	                if((a%i)==0)
	                 printf("%d,",i);
	                 printf("\n");
			  }
	   }
	return 0;
}
