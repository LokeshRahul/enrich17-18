#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j=0,rep=1;
	char s[1000];
	scanf("%s",s);
	n=strlen(s);
	printf("%c",s[0]);
	for(i=1;i<n;i++)
	{
		 if(s[i-1]==s[i])
		 {
		 	rep++;
		 	continue;
		 }
		 if(rep>1)
		 {           
		 	printf("%d",rep);
		 	rep=1;
		 }
		 printf("%c",s[i]);
	}
	return 0;
}
