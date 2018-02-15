#include<stdio.h>
#include<string.h>//to use string function
#define DENSITY 62.4
int main(int argc, char const *argv[])
{
	float weight,volume;
	int size,letters;
	char name[40];//array and char to make a string

	printf("Hi,What's your name?\n");
	scanf("%s",name);//array string use %s
	printf("%s,what's your weight?\n",name);
	scanf("%f",&weight);
	//size=sizeof(name);//byte memory
	//if we use a var intead of sizeof(), need a %d,or sizeof() directly use%lu
	letters=strlen(name);//letter num
	volume=weight/DENSITY;
	printf("Your voule: %2.2f, your name's storage: %lu, your name letters: %d\n",volume,sizeof(name),letters);

	return 0;
}