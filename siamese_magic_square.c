#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter an odd size for magic square\n");
	scanf("%d",&n);
	if((n<1)||(n%2==0))
	{
		printf("\nInvalid size...Enter a valid positive odd number\n");
		return 0;
	}
	int a[n][n],r,c,t=1;
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			a[r][c]=0;
		}
	}
	r=0;
	c=(n/2);
	while(t<=n*n)
	{
		if(a[r][c]==0)
		{	
			a[r][c]=t;
		}
		else
		{
			r+=2;
			c-=1;
			if(c<0)		
			{
				c=n+c;
			}
			if(r>n-1)	
			{
				r=r-n;
			}
			a[r][c]=t;
		}
		r-=1;
		c+=1;
		if(r<0)
		{
			r=n+r;
		}
		if(c>n-1)
		{
			c=c-n;
		}
		t++;
	}
	for(r=0;r<n;r++)
	{
		printf("\n");
		for(c=0;c<n;c++)
		{
			printf("%d	",a[r][c]);
		}
	}
	return 0;
}
