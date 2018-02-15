#include<stdio.h>
#include<stdlib.h>

void func_exchange(int *a,int *b)//change the input two numbers
{
	int temp;
	
	temp=*a;
	a=b;
	b=&temp;
	printf("a..%d b..%d\n",*a,*b );//local variable
}

void func_array(int *array,int size)//use *array(pointer) to transport the array values
{
	int i;
	for(i=0;i<size;i++){
		printf("array[%d]..%d\n",i,array[i]);
	}
}
/*
int main(int argc, char const *argv[])
{
	int c=5;
	int d=3;
	int array[]={1,2,3,4,5};

	func_array(array,sizeof(array)/sizeof(int));
	func_exchange(&c,&d);
	//printf("c..%d d..%d\n",c,d );//ten number after point
	//global variable
	return 0;
}
*/
int main()
{
	char buf[256];
	int size;
	int *variable_array;//can not int variable_array[]
	int i;

	printf("Input array size-> ");
	fgets(buf,256,stdin);//don't know how to use it
	sscanf(buf,"%d",&size);//don't know how to use it either

	variable_array = (int *)malloc(sizeof(int ) * size);//automatic assign memory

	for (i=0;i<size;i++){
		variable_array[i]=i;
	}
	for (i=0;i<size;i++){
		printf("variable_array[%d]..%d\n",i,variable_array[i] );
	}
	return 0;
}