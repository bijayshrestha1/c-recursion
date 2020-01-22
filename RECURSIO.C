#include<stdio.h>
#include<conio.h>
int long multiplynumbers(int n);
void main()
{
	int n;
	clrscr();
	printf("Enter a positive integer:");
	scanf("%d",&n);
	printf("Factorial of %d=%d", n, multiplynumbers (n));
	getch();
}
	int long multiplynumbers(int n)
{
	if(n>=1)
		return n*multiplynumbers(n-1);
	else
	return(0);
}