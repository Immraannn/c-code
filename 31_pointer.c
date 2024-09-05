#include<stdio.h>
int main(){
    int i=72;
    int *j=&i;//j is an integer pointer
    printf("The adress of i is %p\n",&i);
    printf("The adress of i is %p\n",j);
    printf("The value at address j is%d\n",*j);
    printf("The value at address j is%d\n",*(&i));
    return 0;
}
// OUTPUT-
// The adress of i is 0061FF18
// The adress of i is 0061FF18
// The value at address j is72
// The value at address j is72