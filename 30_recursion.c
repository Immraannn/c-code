#include<stdio.h>
int fatorial(int);
   // factorial(n)=factorial(n-1)xn
int factorial(int n){
    if(n ==1 || n ==0){//base case
        return 1;
    }
    return factorial(n-1)*n;
}

int main(){
    int a=3;
    printf("The factorial of %d is %d",a,factorial(a));
}
// OUTPUT-
// The factorial of 3 is 6