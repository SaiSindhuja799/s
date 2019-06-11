#include <stdio.h>

int main() {
	// your code goes here
	int n,i,flag=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(a[i]==i)
	{printf("%d ",a[i]);
	flag=1;
	}
	}
	if(flag==0)
	printf("-1");
	return 0;
}
