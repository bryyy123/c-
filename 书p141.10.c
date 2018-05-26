#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,t,n=20;
	float a=1,b=2,s=0;
	for(i=1;i<=n;i++)
	 {
	 	s=s+b/a;
	 	t=b;
	 	b=b+a;
	 	a=t;
	 }  
	printf("前20项和为:%9.6f\n",s);
	return 0;
}
