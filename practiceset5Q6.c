#include<stdio.h>
int sum_natural(int);
int sum_natural(int n){
    //sum(n)=1+2+3+4+5+....n-1+n;
    //sum(n)=sum(n-1)+n;
    if(n ==1){
        return 1;
    }
    return sum_natural(n-1)+n;
}
int main(){
    int n=5;
    printf("The sum of first 5 natural numbers is %d",sum_natural(n));
return 0;    
}
// OUTPUT-
// The sum of first 5 natural numbers is 15