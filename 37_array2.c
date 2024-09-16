#include<stdio.h>
int main(){
int marks[5];
printf("Enter marks of 5 stdents\n") ;
// scanf("%d",&marks[0]);   
// scanf("%d",&marks[1]);   
// scanf("%d",&marks[2]);   
// scanf("%d",&marks[3]);   
// scanf("%d",&marks[4]); 
for(int i=0;i<5;i++){
    scanf("%d",&marks[i]);
}
for(int i=0;i<5;i++){
    printf("The value of marks %d %d is\n",i,marks[i]);
}  
return 0;
}
// OUTPUT-
// The value of marks 0 12 is
// The value of marks 1 23 is
// The value of marks 2 45 is
// The value of marks 3 67 is
// The value of marks 4 89 is