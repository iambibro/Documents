# include<stdio.h>

int main()
{
	int a[100],i,n,j,t;
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the %d elements in the array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("The shortes list is \n");
	for(i=0;i<n;i++)
	{
		printf("%d "
	,a[i] );
	}
	return 0;
}
