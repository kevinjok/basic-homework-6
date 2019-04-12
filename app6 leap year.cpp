#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int year;
	printf("請輸入年分\n");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("閏年");
	}
	else
	{
		printf("平年");
	}
}

