#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,j,k;
	char a[M][N];
	for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{a[i][j]='*';
	 	 printf("%c",a[i][j]);
		 }
		printf("\n");
	    for(k=1;k<=i+1;k++)
	    printf("\40");
	 }
	 printf("\n");
}
