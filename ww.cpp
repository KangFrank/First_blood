#include<stdio.h>
int main(int argc, char const *argv[])
{
	
	int array[5];
	int i;
	int *p;
//automatically assign the value
	for(i=0;i<5;i++){
		array[i]=i;
	}
//printf every vaule of the array
	for(i=0;i<5;i++){
		printf("%d\n",array[i]);
	}
//print the address of every array value
	for(i=0;i<5;i++){
		printf("&array[%d]...%p\n", i,&array[i]);
	}
//make the array value assigned to pointer
//in the program,p=&array[0] == p=array
	for(p=&array[0];p!=&array[5];p++){
		printf("%d\n",*p );
	}
	return 0;
}