#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,n,a,b,c,d,e;
	printf("������һ��������5λ��������:\n");
	scanf("%d",&x);
	if(x>9999&&x<99999)
	  {n=5;
	  printf("λ��n��%d\n",n); }
	
	else if(x>999)
          {n=4;	
		  printf("λ��n��%d\n",n);}
	
	else if(x>99)
	       {n=3;
		   printf("λ��n��%d\n",n);}	   
	
	else if(x>9)
	       {n=2;
		   printf("λ��n��%d\n",n);}
	
	else
	  {n=1;
	  printf("λ��n��%d\n",n);}
	
	a=x/10000;
	b=(x-10000*a)/1000;
	c=(x-10000*a-1000*b)/100;
	d=(x-10000*a-1000*b-100*c)/10;
	e=(x-10000*a-1000*b-100*c-10*d);
	
	if(n==5)
	{
    printf("ÿһλ���ֱַ�Ϊ:%d,%d,%d,%d,%d",a,b,c,d,e);
    printf("��λ���ֵ�����Ϊ:%d%d%d%d%d",e,d,c,b,a);
	} 
	else if(n==4)
	{
    printf("ÿһλ���ֱַ�Ϊ:%d,%d,%d,%d",b,c,d,e);
    printf("��λ���ֵ�����Ϊ:%d%d%d%d",e,d,c,b);
	}
    else if(n==3)
    {
	printf("ÿһλ���ֱַ�Ϊ:%d,%d,%d",c,d,e);
	printf("��λ���ֵ�����Ϊ:%d%d%d",e,d,c);
	}
	else if(n==2)
	{
	printf("ÿһλ���ֱַ�Ϊ:%d,%d",d,e);
	printf("��λ���ֵ�����Ϊ:%d%d",e,d);
	}
	else
	{ e=x;
	printf("ÿһλ���ֱַ�Ϊ:%d",e);
	printf("��λ���ֵ�����Ϊ:%d",e);
	}
	

	return 0;
}
