#include <stdio.h>
int main(void) 
{  
int n,i,a[n],min;  
scanf("%d",&n);
for(i=0;i<n;i++) 
scanf("%d",&a[i]);
    min=a[0];
	for(i=1;i<n;i++)
	{ 
	if(a[i]<min)
	{
		min=a[i];
	}
	}
	printf(" the min number is: %d",min);


return 0;
}
