#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1=100,n2=50,n3=10;
	float k,s;
	float s1=0,s2=0,s3=0;
	 for(k=1;k<=100;k++)
	     s1=s1+k;
	 for(k=1;k<=50;k++)
	     s2=s2+k*k;
	 for(k=1;k<=10;k++)
	     s3=s3+1/k;
    s=s1+s2+s3;
	printf("sum=%8.2f\n",s);
	return 0;
}
