#include<stdio.h>
int main(){
    float a=9;
    int b=2;
    float c=a/b;
    int d=7.7;//It will give demotion value withiut point vlaue 
    printf("The value of a/b is %f \n",c);
    printf("The value of d is %d \n",d);
    return 0;
}
OUTPUT-
The value of a/b is 4.500000 
The value of d is 7
