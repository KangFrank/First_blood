#include<stdio.h>
//void quick1_sort(int *data,int data_size);
#define SWAP(a,b) {int temp;temp=a;a=b;b=temp;}

void quick_sort_sub(int *data,int left,int right)
{
	int left_index=left;
	int right_index=right;
	int pivot=data[(left+right)/2];

	while(left_index<=right_index){
		for(;data[left_index]<pivot;left_index++)  //find the two number of pivot
			;
		for(;data[right_index]>pivot;right_index--)
			;
		if(left_index<=right_index){               //swap two values
			SWAP(data[left_index],data[right_index]);
			left_index++;
			right_index--;
		}			
	}
	if(right_index>left){     //right side keep swap
		quick_sort_sub(data,left,right_index);
	}
	if(left_index<right){     //left side keep swap
		quick_sort_sub(data,left_index,right);
	}
}

void quick1_sort(int *data,int data_size)
{
	quick_sort_sub(data,0,data_size-1);
}

int main(void)
{
	int data[]={1,3,4,5,6,6,7,2,1,3,2,8,6,4,9,1,8,2,9,3,6,12,56,23,7,32,12,13,17,71,65,43,21};
	quick1_sort(&data,0,sizeof(data));
	return 0;
}
