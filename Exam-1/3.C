#include<stdio.h>
#include<conio.h>
main()
{
	int n, i=1;
	int sum=0;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&n);

	do
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
			sum+=i;
		} i++;

	}while(i<=n);

	printf("\n%d",sum);


	getch();
}