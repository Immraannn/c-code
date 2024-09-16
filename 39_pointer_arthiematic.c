#include<stdio.h>
int main(){
int a=5;
int *ptr =&a;
printf("The adress of a is %u\n",&a);    
printf("The adress of a is %u\n",ptr);
ptr++;    
printf("The value of ptr is %u\n",ptr);    
}
// OUTPUT-
// The adress of a is 6422296
// The adress of a is 6422296
// The value of ptr is 6422300