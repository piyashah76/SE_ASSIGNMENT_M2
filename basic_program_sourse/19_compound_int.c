/*Amount= P(1 + R/100)t

Compound Interest = Amount – P
Where, 
P is principal amount 
R is the rate and 
T is the time span
*/
#include<stdio.h>
main()
{
	int amount,ci,p,r,t;
	printf("Enter principal amount:");
	scanf("%d",&p);
	printf("Enter rate: ");
	scanf("%d",&r);
	printf("Enter time span: ");
	scanf("%d",&t);
	amount= p*(1 + r/100)*t ;
	ci=amount-p;
	printf("Compound interest is : %d",ci);
}
