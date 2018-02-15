#include<stdio.h>
#include<stdlib.h>
int global_variable;
static int file_static_variable;

void func1()
{
	int func1_variable;
	static int func1_static_variable;
	printf("&func1_variable..%p\n",&func1_variable );
	printf("&func1_static_variable..%p\n", &func1_static_variable);
}

void func2()
{
	int func2_variable;
	printf("&func2_variable..%p\n",&func2_variable);
}

int main(void)
{
	int *p;
	printf("&func1..%p\n",func1 );
	printf("&func2..%p\n",func2 );

	printf("String literal..%p\n","abc" );
	printf("&file_static_variable..%p\n",&file_static_variable );

	func1();
	func2();

	//p=malloc(sizeof(int *p));
	printf("malloc address..%p\n", p);

	return 0;
}