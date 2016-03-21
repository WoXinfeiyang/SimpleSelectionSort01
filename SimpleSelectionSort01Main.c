#include<stdio.h>
/**
 * �ļ����ƣ�
 * ʱ�䣺2016-3-7 21:32
 * ˵����1����ѡ������SimpleSelectionSort���ͨ��n-i�ιؼ��ּ�ıȽϣ���(n-i+1)
 *����¼��ѡ���ؼ�����С�ļ�¼�����͵�i(1<=i<=n)����¼����֮�� 
 *2��ʱ�临�Ӷȣ�o(n^2).
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

