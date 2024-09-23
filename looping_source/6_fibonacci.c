#include<stdio.h>
main()
{
	int i, n, a=0, b=1, c;
	printf(" Enter a number : ");
	scanf("%d",&n);
	printf(" %d %d",a, b); 
	i=1;
	while(i<=n)
	{
		c=a+b;
		printf(" %d", c);
		a=b;
		b=c;
		i++;
	}
}		
