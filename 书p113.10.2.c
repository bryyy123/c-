	#include"stdio.h" 
	int main()
	{

	int I,c;
	float X;
	printf("请输入当月利润I:\n");
	scanf("%d",&I);
	if(I>1000000)
	c=10;
	else
	c=I/100000;
	switch(c)
	{
		case 0: X=I*0.1;break;
		case 1: X=10000+(I-100000)*0.075;break;
		case 2: 
		case 3: X=17500+(I-200000)*0.05;break;
		case 4: 
		case 5: X=27500+(I-400000)*0.03;break;
		case 6: 
		case 7:
		case 8:
		case 9: X=33500+(I-600000)*0.015;break;
		case 10: X=39500+(I-1000000)*0.01;break;		
	}
	printf("应发奖金总数X:%8.2f\n",X);
	
	return 0;
	}