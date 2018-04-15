#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float I,X;
	printf("请输入当月利润I:\n");
	scanf("%f",&I);
	if(I<=100000)
	X=I*0.1;
	
    else if(I<=200000)
    {X=10000+(I-100000)*0.075;
	}
	else if(I<=400000)
	{X=17500+(I-200000)*0.05;
	}
	else if(I<=600000)
    {X=27500+(I-400000)*0.03;
	}
	else if(I<=1000000)
	{X=33500+(I-600000)*0.015;
	}
	else
	X=39500+(I-1000000)*0.01;
    printf("应发奖金总数:%8.2f\n",X);
	return 0;
}
