#include<stdio.h>
#include<stdlib.h>
int main()
{
        int n;
        scanf("%d",&n);
        int *a=(int*)malloc(n*sizeof(n));
        int key;
        for(int i=0;i<n;i++)
                scanf("%d",&a[i]);
        for(int i=0;i<n;i++)    
        {                                       
                key=a[i];
                for(int j=i;j<n;j++)
                        if(key>a[j])
                        {                                                                                                                                                             
				a[i]=a[i]^a[j];
                                a[j]=a[i]^a[j];                                                                                                                                       
				a[i]=a[i]^a[j];                                                                                                                                                                      
			}                                                                 
        }
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
        printf("\n");
	return 0;
}
