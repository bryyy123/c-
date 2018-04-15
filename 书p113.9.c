#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,n,a,b,c,d,e;
	printf("请输入一个不多于5位的正整数:\n");
	scanf("%d",&x);
	if(x>9999&&x<99999)
	  {n=5;
	  printf("位数n：%d\n",n); }
	
	else if(x>999)
          {n=4;	
		  printf("位数n：%d\n",n);}
	
	else if(x>99)
	       {n=3;
		   printf("位数n：%d\n",n);}	   
	
	else if(x>9)
	       {n=2;
		   printf("位数n：%d\n",n);}
	
	else
	  {n=1;
	  printf("位数n：%d\n",n);}
	
	a=x/10000;
	b=(x-10000*a)/1000;
	c=(x-10000*a-1000*b)/100;
	d=(x-10000*a-1000*b-100*c)/10;
	e=(x-10000*a-1000*b-100*c-10*d);
	
	if(n==5)
	{
    printf("每一位数字分别为:%d,%d,%d,%d,%d",a,b,c,d,e);
    printf("各位数字的逆序为:%d%d%d%d%d",e,d,c,b,a);
	} 
	else if(n==4)
	{
    printf("每一位数字分别为:%d,%d,%d,%d",b,c,d,e);
    printf("各位数字的逆序为:%d%d%d%d",e,d,c,b);
	}
    else if(n==3)
    {
	printf("每一位数字分别为:%d,%d,%d",c,d,e);
	printf("各位数字的逆序为:%d%d%d",e,d,c);
	}
	else if(n==2)
	{
	printf("每一位数字分别为:%d,%d",d,e);
	printf("各位数字的逆序为:%d%d",e,d);
	}
	else
	{ e=x;
	printf("每一位数字分别为:%d",e);
	printf("各位数字的逆序为:%d",e);
	}
	

	return 0;
}
