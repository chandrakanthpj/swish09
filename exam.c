#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x,p;
	int k ,total;
	printf("enter cost of coffee and discount on it");
	scanf("%d %d",&x,&p);
	total=0;
	for(k=1;k<100;k++)
		{
			total=(x/p*100);
		}	
		printf("total cost is %d\n",total);		
		return 0;
}
