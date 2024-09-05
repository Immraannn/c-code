#include<stdio.h>
int main(){
    char i='A';
    char*j=&i; //j is an integer pointer
    float k=5.232;
    float*k1=&k;
    printf("The adress of i is %p\n",&i);
    printf("The adress of i is %p\n",j);   
    printf("The adress of k is %p\n",k1);   
    return 0;
}
// OUTPUT-
// The adress of i is 0061FF17
// The adress of i is 0061FF17
// The adress of k is 0061FF10