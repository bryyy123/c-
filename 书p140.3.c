#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,n,b,p;
	printf("请输入两个正整数m和n:\n");
	scanf("%d,%d",&m,&n);
	p=m*n;
    while(m!=n)
    {
	  while(m>n)
     {
	 m=m-n; }
     while(m<n)
     {
	 n=n-m;}
	}
	b=p/m;
	printf("%d,%d\n",m,b);	
	return 0;
}
