#include"stdio.h"
#include"math.h"
int main()
{
	int x,n;
	printf("请输入一个小于1000的正数n：\n");
	scanf("%d",&n);
	if(n>=1000)
	{
		printf("输入的数不符合要求，请重新输入\n");
				
	}
	 else
	 {
		x=sqrt(n);
	    printf("平方根的整数部分是：%d\n",x);	
	}	
	return 0;
} 
