/*First file is the self_defined fucntion as max.cpp source*/
#include<iostream>

/*Function 1 to return one's square*/
int f1(int a){
return a*a;
}

/*Function 2 to swamp the two numbers*/
/*Remember the void don't need a return, else the int/double/float/char need a return*/
void f2(int a,int b){
int temp=0;
temp=a;
a=b;
b=temp;
std::cout<<a<<std::endl;
std::cout<<b<<std::endl;
}

/*The file is the head file as header.h which quote the self_defined function*/
int f1(int );
void f2(int ,int );

/*This is the main_function which use the function and file we built already:main.cpp*/
#include<stdio.h>
#include<iostream>
#include "header.h"  //This is the main light of the code
int main(void){
using namespace std;
int a=5,b=6;
cout<<f1(aa)<<endl;
f2(aa,bb);
system("pause");
return 0;
}
