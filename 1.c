#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,a,b;
	printf("enter your num:");
	scanf("%d",&n);
	printf("enter your a:");
	scanf("%d",&a);
	printf("enter your b:");
	scanf("%d",&b);
	int a[n];
	for(i=0;i<n;i++)
	{
	  if(a>n)
	  {
	  	printf(" a is max ");
	  }
	  else
	  {
	  	printf(" n is max ");
	  }
	 	printf("%d\n",a[n]);
	}
	  printf("\n");
}