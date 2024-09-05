#include<stdio.h>
int main(){
    int i=5;
    printf("The value of i is %d \n",i);
    i=i+5;
    printf("The value of i is %d \n",i);
    printf("The value of i is %d \n",i++);//10
    printf("The value of i is %d \n",i);//11
    //i++ prints i first and then increments i(post increment operator)
    //++i increments i first and then prints i(post increment operator)
}
// OUTPUT-
// The value of i is 5 
// The value of i is 10
// The value of i is 10
// The value of i is 10
// The value of i is 11