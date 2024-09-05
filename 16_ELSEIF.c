#include<stdio.h>
int main(){
    int age=45;
    if (age>60){
        printf("you can drive and you are a senior citizen");
    }
    else if(age>40){
        printf("You can drive and you are elder");
    }
    else if(age>18){
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }
//lAST ELSE IS OPTIONAL 
}
// OUTPUT-
// You can drive and you are elder