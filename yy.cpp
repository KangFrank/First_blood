#include<stdio.h>
#include<stdint.h>

union X
{
	int32_t a;
	struct
	{
	int16_t b;
	int16_t c;
	};
};

int main()
{
	X x;
	x.a=0x08172017;
	printf("%x,%x\n",x.b,x.c );
	return 0;
}
