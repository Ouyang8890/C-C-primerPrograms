#include<stdio.h>
void hanoi(int,int,int,int);
main()
{
	int n;
	printf("������Բ�̸���\n");
	scanf("%d",&n);
	printf("��A�����ƶ�%d��Բ�̵�C��������B�����Ĳ������£�\n",n);
	hanoi(n,'A','B','C');			
}
void hanoi(int n,int x,int y,int z)//��n��Բ�̽���y������x�����ƶ���z���� 
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