#include<stdio.h>
#include<string.h>
int main(void)
{
int i,j,k;
char temp;
char  a[10];
for(i=0;i<10;i+)
  {
    scanf("%d",a[i]);
  }
printf("%s",a);
printf("Now you are going to have more money! Let's have the magic program! \n");
for(j=0;j<10;j++)
  {
   if(a[j]=='.')
      {
        temp=a[9];
        a[9]=a[j];
        a[j]=a[j+1];
      }
  }
printf("Your new money is: %s!\n",a);
printf("Congratulations for your self-cheat successfully!\n");

system("pause");
return 0;
}