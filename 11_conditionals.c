#include<stdio.h>
int main(){
    int age=15;
    if(age>10){
        printf("we are inside if\n");
        printf("your age is greater than 10\n");
    }
     else if(age%5==10){
        printf("we are inside else if\n");
        printf("your age is divisble by 5");
    }
    return 0;
}
// OUTPUT-
// we are inside if
// your age is greater than 10
// we are inside else if
// your age is divisble by 5