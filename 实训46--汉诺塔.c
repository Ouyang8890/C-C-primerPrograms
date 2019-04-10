#include<stdio.h>
void hanoi(int,int,int,int);
main()
{
	int n;
	printf("ÇëÊäÈëÔ²ÅÌ¸öÊý\n");
	scanf("%d",&n);
	printf("´ÓAËþ×ùÒÆ¶¯%d¸öÔ²ÅÌµ½CËþ×ù½èÖúBËþ×ùµÄ²½ÖèÈçÏÂ£º\n",n);
	hanoi(n,'A','B','C');			
}
void hanoi(int n,int x,int y,int z)//½«n¸öÔ²ÅÌ½èÖúyËþ×ù´ÓxËþ×ùÒÆ¶¯µ½zËþ×ù 
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