#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("������ɼ���\n");
	scanf("%d",&x);
	if(x>=90)
	printf("�ɼ��ȼ�Ϊ:\'A\'\n");
	else if(x>=80)
	printf("�ɼ��ȼ�Ϊ:\'B\'\n");
	else if(x>=70)
	printf("�ɼ��ȼ�Ϊ:\'C\'\n");
	else if(x>=60)
	printf("�ɼ��ȼ�Ϊ:\'D\'\n");
	else
	printf("�ɼ��ȼ�Ϊ:\'E\'\n");
	
	return 0;
}
