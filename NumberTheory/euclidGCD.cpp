#include<stdio.h>
int GCD(int x,int y)
{
	if(y==0)
		return x;
	else
		return GCD(y,x%y);
}
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	if(x>=y)
		printf("%d\n",GCD(x,y));
	else
		printf("%d\n",GCD(y,x));
	return 0;
}
