#include<stdio.h>
/**
 * 文件名称：
 * 时间：2016-3-7 21:32
 * 说明：1、简单选择排序SimpleSelectionSort概念：通过n-i次关键字间的比较，从(n-i+1)
 *个记录中选出关键字最小的记录，并和第i(1<=i<=n)个记录交换之。 
 *2、时间复杂度：o(n^2).
 * */

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void SimpleSelectionSort(int *a,int length)
{
	int i,j;
	int min;
	for(i=0;i<length;i++)
	{
		min=i;
		for(j=i+1;j<length;j++)
		{
				if(a[j]<a[min])
				{
					min=j;	
				}
		}
		if(min!=i)
		{
			swap(&a[i],&a[min]);
		}
		
	}
}




void arrayTraversal(int *a,int length)
{
	int i;
	for(i=0;i<length;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void main()
{
	int a[7]={5,4,3,2,1,7,6};
	SimpleSelectionSort(a,7);
	arrayTraversal(a,7);

	int b[5]={5,3,4,6,2};
	SimpleSelectionSort(b,5);
	arrayTraversal(b,5);
}

