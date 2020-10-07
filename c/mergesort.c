#include<stdio.h>
//#include<conio.h>

void merge(int a[],int first,int mid,int last)
{
	int i,j,k,index,temp[20];
	i=first;
	j=mid+1;
	index=first;
	while(i<=mid && j<=last)
	{
		if(a[i]<a[j])
		{
			temp[index]=a[i];
			i++;
		}
		else
		{
			temp[index]=a[j];
			j++;
		}
		index++;
	}
	if(i>mid)
	{
		while(j<=last)
		{
			temp[index]=a[j];
			index++;
			j++;
		}
	}
	else
	{
		while(i<=mid)
		{
			temp[index]=a[i];
			index++;
			i++;
		}
	}
	k=first;
	while(k<index)
	{
		a[k]=temp[k];
		k++;
	}
}
void mergesort(int a[],int first,int last)
{
	int mid;
	if(first<last)
	{
		mid=(first+last)/2;
		mergesort(a,first,mid);
		mergesort(a,mid+1,last);
		merge(a,first,mid,last);
	}
}

void main()
{
	int n,a[20],i,j;
	printf("Enter the number of terms you want to enter:");
	scanf("%d",&n);
	printf("Enter the datas:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("The datas after sorting is:\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);	
	}
}
