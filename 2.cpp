/* accept marks in m,p,c and print total & average */
#include<stdio.h>
main()
{
	int m,p,c,tot;
	float avg;
	printf("\n enter marks in maths,physics,chemistry");
	scanf("%d%d%d",&m,&p,&c);
	tot=m+p+c;
	avg=(float)tot/3;
	printf("\n Total marks:%d",tot);
	printf("\n Average : %f",avg);
	}
