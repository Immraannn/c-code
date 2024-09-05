#include<stdio.h>
float average(int a,int b,int c);
float average(int a,int b,int c){
 return (a+b+c)/3.0;   
}
int main(){
    int a=3,b=6,c=8;
    printf("The average of a,b and c is%f",average(a,b,c));
    
}
// OUTPUT-
// The average of a,b and c is5.666667