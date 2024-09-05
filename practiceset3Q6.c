#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter value of a \n");
    scanf("%d",&a);
    printf("Enter value of b \n");
    scanf("%d",&b);
    printf("Enter value of c \n");
    scanf("%d",&c);
    printf("Enter value of d \n");
    scanf("%d",&d);
    if(a>b && a>c &&a>d){
        printf("a is greatest among them %d \n",a);
    }
     else if(b>a && b>c &&b>d){
        printf("b is greatest among them %d \n",b);
    }
   else  if(c>a && c>b &&c>d){
        printf("c is greatest among them %d \n",c);
    }
    else if(d>a && d>c &&d>b){
        printf("d is greatest among them %d \n",d);
    }}
// OUTPTUT-
// Enter value of a 
// 2
// Enter value of b
// 1
// Enter value of c
// 5
// Enter value of d
// 6
// d is greatest among them 6