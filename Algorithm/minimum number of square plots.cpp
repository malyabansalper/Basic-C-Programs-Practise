#include<stdio.h>

int main()
{
long int i,j,m,n,x,a,b;
for(i=1;i<=1;i++)
{
 scanf("%ld %ld",&m,&n);
 for(j=1; j<=m&&j<=n; j++)
 {
  if(m%j==0 && n%j==0)
  {
  x=j;
  }
 }
 a=m/x;
 b=n/x;
 printf("%ld \n",(a*b));
}
return 0;
}