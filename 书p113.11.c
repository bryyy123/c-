#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,t;
	printf("请输入4个整数\n");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	if(a>b)
	{t=a;
	 a=b;
	 b=t;
	}
	if(a>c)
	{t=a;
	 a=c;
	 c=t;
	}
	if(a>d)
	{t=a;
	 a=d;
	 d=t;
	}
	if(b>c)
	{t=b;
	 b=c;
	 c=t;
	}
	if(b>d)
	{t=b;
	 b=d;
	 d=t;
	}
	if(c>d)
	{t=c;
	 c=d;
	 d=t;
	}
    printf("从小到大的顺序为:%d,%d,%d,%d",a,b,c,d);
	return 0;
}
