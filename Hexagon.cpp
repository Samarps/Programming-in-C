#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,sp;
	printf("Enter no. length of regular hexagon in terms of stars=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(sp=1;sp<=n-i;sp++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		{
			if(j==1||j==2*i-1)
			printf("*");
			else
			printf(" ");
		}printf("\n");
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			if(j==1||j==2*n-1)
			printf("*");
			else
			printf(" ");
		}printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(sp=1;sp<=n-i;sp++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		{
			if(j==1||j==2*i-1)
			printf("*");
			else
			printf(" ");
		}printf("\n");
	}
getch();
}
