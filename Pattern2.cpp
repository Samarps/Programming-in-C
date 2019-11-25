#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,sp;
	printf("Enter the length of the side of smaller triangle=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(sp=1;sp<=2*n-i;sp++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		{
			if(j%2==0)
			printf(" ");
			else
			printf("*");
		}printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(sp=1;sp<=n-i;sp++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		{
			if(j%2==0)
			printf(" ");
			else
			printf("*");
		}
		for(sp=1;sp<=2*n+1-2*i;sp++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		{
			if(j%2==0)
			printf(" ");
			else
			printf("*");
		}
	printf("\n");
	}
getch();
}
