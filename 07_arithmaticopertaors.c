#include<stdio.h>
int main(){
    int a=4,b=3,c=a+b;
    printf("The value of a is %d \n and value of b is %d \n and value of c is %d \n",a,b,c);
    //Modulus operator is used to get the remainder
    printf("The remainder when a is divided by b is %d \n",a%b);
    //This do not work for exponential in c
    //int d=a^b;
    return 0;
}