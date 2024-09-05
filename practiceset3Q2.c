#include<stdio.h>
int main(){
    int a;
    printf("Enter Total percent marks \n");
    scanf("%d",&a);
    int b;
    printf("each percent marks in each subject \n");
    scanf("%d",&b);
    if(a>=40 && b>=33){
        printf("student is passed \n");
    }
    if(a>=40 && b<33){
        printf("student is fail \n");
    }
    if(a<40 && b>=33){
        printf("student is also fail \n");
    }
    if(a<40 && b<33){
        printf("student is also fail again");
    }
}
