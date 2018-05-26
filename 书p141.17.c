#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char x,y,z;
	 for(x='X';x<='Z';x++)
	    for(y='X';y<='Z';y++)
	        if(x!=y)
	           for(z='X';z<='Z';z++)
	              if(x!=z&&y!=z)
	                if(x!='X'&&z!='X'&&z!='Z')
	                printf("A--%c\tB--%c\tC--%c\n",x,y,z);
	return 0;
}
