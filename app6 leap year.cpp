#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int year;
	printf("�п�J�~��\n");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("�|�~");
	}
	else
	{
		printf("���~");
	}
}

