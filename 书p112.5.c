#include"stdio.h"
#include"math.h"
int main()
{
	int x,n;
	printf("������һ��С��1000������n��\n");
	scanf("%d",&n);
	if(n>=1000)
	{
		printf("�������������Ҫ������������\n");
				
	}
	 else
	 {
		x=sqrt(n);
	    printf("ƽ���������������ǣ�%d\n",x);	
	}	
	return 0;
} 
