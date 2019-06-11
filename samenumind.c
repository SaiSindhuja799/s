#include <stdio.h>

int main() {
	// your code goes here
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(a[i]==i+1)
	printf("%d ",a[i]);
	}
	return 0;
}
