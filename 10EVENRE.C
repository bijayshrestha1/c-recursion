#include<stdio.h>
#include<conio.h>
int even (int cur, int limit);
void main()
{
	int lowerlimit, upperlimit;
	clrscr();
	printf("Enter lowerlimit:");
	scanf("%d",&lowerlimit);
	printf("Enter upperlimit:");
	scanf("%d",&upperlimit);
	printf("First 10 even numbers from %d to %d are:",lowerlimit, upperlimit);
	getch();
}
	int even(int cur,int limit)
	{
		if(cur>limit)
		return(0);
		printf("%d",cur);
}
