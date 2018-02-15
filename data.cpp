/*This is just used to test my C program skills
 this one is to familiar with c's basic grammer
 scanf(),printf().etc
*/
#include<stdio.h>
int main(void)
{
	/* section 1: float int scanf printf char %d %f %c
	float weight;
	float value;
	printf("Are you worth your weight in rhodium?\n");
	printf("Let's chech it out.\n");
	printf("Please enter your pounds: ");
	scanf("%f",&weight);
	value=770*weight*14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n",value);
    */
    /* section2: char short long sizeof() %lu
	char ch;
	printf("Please enter a character: ");
	scanf("%c",&ch);
	printf("The unicode for %c is %d.\n",ch,ch);
	printf("And its size is %lu %lu %lu.\n",sizeof(char),sizeof(int),
		sizeof(long));
	*/
	float salary;
	printf("\aEnter you desired monthly salary: ");
	printf(" $_______\b\b\b\b\b\b\b");//learn to use back symbol
	scanf("%f",&salary);
	printf("\n\t$%.2f a month",salary);
	return 0;
}