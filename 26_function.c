#include<stdio.h>
//FUNCTION PROTOTYPE
int sum(int,int);
//FUNCTION DEFINITION
int sum(int x,int y){
    printf("The sum is %d\n",x+y);
    return x+y;
}
int main(){
    int a=1;
    int b=2;
    int c=sum(a,b);//FUNCTION CALL
    sum(a,b);
    int a1=21;
    int b1=12;
    sum(a1,b1);

}
// OUTPUT-
// The sum is 3
// The sum is 3
// The sum is 33