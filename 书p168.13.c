#include <stdio.h>
#include <stdlib.h>
#define M 100
#define N 100
#define P 201
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	char str1[M],str2[N],str3[P];
	get(str1);
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	  str3[i]=str1[i];
	for(j=0;str2[j]!='0';j++)
	  str3[j+i]=str2[j];
	printf("%s\n%s\n%s\n",str1,str2,str3);
	return 0;
}
