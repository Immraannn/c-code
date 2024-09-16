#include<stdio.h>
int main(){
int cgpa[3]={9,8,7};
//int cgpa[]={9,8,7};
for(int i=0;i<3;i++){
    printf("The value of array at index %d is %d\n",i,cgpa[i]);
}    
}
// OUTPUT-
// The value of array at index 0 is 9
// The value of array at index 1 is 8
// The value of array at index 2 is 7