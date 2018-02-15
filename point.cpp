#include<stdio.h>
int main(void)
{

	int hope=5;
	int piyo=10;
	int *hope_p;
    //output all the variables' address
	printf("&hope..%p\n",&hope);
	printf("&piyo..%p\n",&piyo);
	printf("&hope_p..%p\n",&hope_p);//wonder if the opointer with &

	//make the address of hope to *hope_p
	hope_p=&hope;
	printf("*hope_p..%p\n",hope_p);
	printf("*hope_p..%d\n",*hope_p);

	*hope_p=10;
	printf("hope..%d\n",hope);
	return 0;
}