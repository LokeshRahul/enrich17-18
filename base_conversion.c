#include<stdio.h>
#include<math.h>
int main()
{
	int num,base,temp,n=0,rem,i=0;
	scanf("%d %d",&num,&base);
	temp=num;                             
	while(temp>0)
	{
		rem=temp%base;
		temp=temp/base;
		n+=rem*pow(10,i);
		i++;	
	}
	printf("%d",n);
	return 0;
}
