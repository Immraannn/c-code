#include<stdio.h>
int sum(int,int);
int sum(int a,int b){
    a=4;//sum function cant change x using a because copy of x is provided to sum in a
    return a+b;
}
int main(){
    int x=2,y=9;
 printf("The sum of 1 and 6 is%d\n",sum(1,6));   
 printf("The sum of x and y is%d\n",sum(x,y));   
}
// OUTPUT-
// The sum of 1 and 6 is7
// The sum of x and y is11