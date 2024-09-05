#include<stdio.h>
int main(){
    int i=1;
    int sum=0;
    while(i<=10){
        sum +=i;
        i++;
    }
    printf("The sum of first 10 natural numver is %d",sum);
}
// OUTPUT-
// The sum of first 10 natural numver is 55