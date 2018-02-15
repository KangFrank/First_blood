#include<stdio.h>

typedef struct 
{
	int int1;
	char pad1[4];
	double double1;
	char char1;
	char pad2[7];
	double double2;
}Hoge;

int main(void)
{
	Hoge hoge;
	printf("hoge size..%d\n",sizeof(Hoge) );
	printf("hoge..%p\n",&hoge );
	printf("int1..%p\n", &hoge.int1);
	printf("double1..%p\n", &hoge.double1);
	printf("char1..%p\n", &hoge.char1);
	printf("double2..%p\n",&hoge.double2 );
	int h=0X12345678;
	unsigned char *h_p=(unsigned char *)&h;
	printf("%x\n", h_p[0]);
	printf("%x\n", h_p[1]);
	printf("%x\n", h_p[2]);
	printf("%x\n", h_p[3]);

	return 0;
}