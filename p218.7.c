#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	void cpy(char[],char[]);
	char str[80],c[80];
	printf("input string:");
	gets(str);
	cpy(str,c);
	printf("the vowel letters are:%s\n",c);
	return 0;
}
    void cpy(char s[],char c[])
  { 
    int i,j;
    for (i=0,j=0;s[i]!='\0';i++)
    if (s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||
       s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
     {
	   c[j]=s[i];
       j++;
    }
     c[j]='\0';
 }
