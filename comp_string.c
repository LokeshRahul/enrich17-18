#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,j=0,rep=1;
	char s[1000],comp_s[1000];
	scanf("%s",s);
	n=strlen(s);
	comp_s[0]=s[0];
	for(i=1;i<=n;i++)
	{
		 if(s[i-1]==s[i])
		 {
		 	rep++;
		 	continue;
		 }
		 if(rep>1)
		 {           
		 	comp_s[++j]=rep+'0';
		 	rep=1;
		 }
		 comp_s[++j]=s[i];
	}
	comp_s[j]='\0';
    	printf("%s",comp_s);
	return 0;
}
