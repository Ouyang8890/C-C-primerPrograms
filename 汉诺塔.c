#include<stdio.h>
void hanoi(int,int,int,int);
main()
{
	int n;
	printf("请输入圆盘个数\n");
	scanf("%d",&n);
	printf("从A塔座移动%d个圆盘到C塔座借助B塔座的步骤如下：\n",n);
	hanoi(n,'A','B','C');			
}
void hanoi(int n,int x,int y,int z)//将n个圆盘借助y塔座从x塔座移动到z塔座 
{
	int a=0;
	if(n==1)
		printf("%c-->%c\n",x,z);
	else
	{
		hanoi(n-1,x,z,y);
		printf("%c-->%c\n",x,z);
		hanoi(n-1,y,x,z);
	}		
}
