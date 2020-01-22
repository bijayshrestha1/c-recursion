#include<stdio.h>
#include<conio.h>
int fibonacci (int);
void main()
{
	int n,i=0,c;
	clrscr();
	printf("Fibonacci series \n");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		printf("%d\n", Fibonacci (i));
		i++;
	}
	getch();
}
int Fibonacci (int n)
{
	if(n==0)
	return(0);
	else if(n==1)
	return(1);
	else
	return(Fibonacci(n-1) + Fibonacci (n-2));
}
