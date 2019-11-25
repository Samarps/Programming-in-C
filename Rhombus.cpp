#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,sp;
	printf("Enter odd no. of rows=");
	scanf("%d",&n);
	if(n%2==0)
	printf("Wrong type of input");
	
	else
	{
		for(i=1;i<=(n+1)/2;i++)
		{
			for(sp=1;sp<=(n-(2*i)+1)/2;sp++)
			printf(" ");
			
			for(j=1;j<=2*i-1;j++)
			{
				if(j==1 || j==2*i-1)
				printf("*");
				
				else
				printf(" ");
			}printf("\n");
		}
		for(i=1;i<=(n-1)/2;i++)
		{
			for(sp=1;sp<=i;sp++)
			printf(" ");
			
			for(j=1;j<=n-2*i;j++)
			{
				if(j==1 || j==n-2*i)
				printf("*");
				
				else
				printf(" ");
			}printf("\n");
		}
	}
}
