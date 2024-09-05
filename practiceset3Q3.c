#include<stdio.h>
int main(){
    float a;
    printf("enter your income  in LPA \n");
    scanf("%f",&a);
    
    if(a <=2.5){
        printf("you have to pay zero percent of your income %f \n ",(0*a));
    }
    
     else if(a>2.5 && a<=5){
        printf("you have to pay 5 percent of your income %f \n",(0.05*a));
     }
     
    else if(a>5 && a<=10){
        printf("you have to pay 20 percent of your income %f \n",(0.2*a));
    }
    
    else if  (a > 10){
        printf("you have to pay 30 percent of your income %f \n",(0.3*a));
    }
}
// OUTPUT-
// enter your income  in LPA 
// 8
// you have to pay 20 percent of your income 1.600000 
