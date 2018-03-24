#include<stdio.h>

int main() 
{
   int r,c,i,j,n=1,x=1;
   printf("Enter the size of rows and columns\n");
   scanf("%d %d",&r,&c);
   for(i=1;i<=r;i++)
   {    
        for(j=0;j<c;j++)
        {
            printf("%d  ",n);
            n+=x;
        }
        n+=c-x;
        x*=-1;
        printf("\n");
   }
   return 0;
}
