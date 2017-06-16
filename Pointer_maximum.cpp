#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main(void){
int i;
int a[10],*p;
cout<<"Pleae enter your numbers: "<<endl;
for(i=0;i<=10;i++){
cin>>a[i];
}

for(i=0,*p=&a[0];i<=10;i++){
if(a[i]>*p){
    p=&a[i];
}
}
cout<<"The maximum number is "<<*p<<endl;
//In c language: printf("The maximum number is %d\n",*p);
system("pause");
return 0;
}
