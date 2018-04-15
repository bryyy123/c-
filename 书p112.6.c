#include"stdio.h"
#include"math.h"
int main()
{
	float x,y;
	printf("请输入x的值：\n");
	scanf("%f",&x);
	if(x<1)
	  y=x;
    else if(x>=1&&x<10)
      y=2*x-1;
    else if(x>=10)
      y=3*x-11;
    printf("相应的y的值：%f\n",y);
    
	return 0;
} 