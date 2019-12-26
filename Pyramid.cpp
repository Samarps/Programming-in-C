#include<stdio.h>
#include<conio.h>
main()
{
	int i, n;
	
	printf("Enter value of n : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		for(int sp=1; sp<=n-i; sp++)
		printf(" ");
		
		for(int j=1; j<=i; j++)
		printf("* ");
		
		printf("\n");
	}
	
getch();
}
