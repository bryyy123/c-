#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[80];
    void insert(char []);
    printf("input four digits:");
    scanf("%s",str);
    insert(str);
   return 0;
   }
    void insert(char str[])
  {
    int i;
    for (i=strlen(str);i>0;i--)
    {
	 str[2*i]=str[i];
     str[2*i-1]=' ';
   }
    printf("output:\n%s\n",str);
  }
  
