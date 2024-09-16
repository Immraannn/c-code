#include<stdio.h>
int main(){
int arr[3][2];
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
    printf("Enter the value of arr[%d][%d]",i,j);
    scanf("%d",&arr[i][j]);    
    }
}    
// for(int i=0;i<3;i++){
//     for(int j=0;j<2;j++){
//     printf("The value of arr[%d][%d] is %d\n",i,j,arr[i][j]);   
//     }
// }    
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
    printf(" %d",arr[i][j]);   
    }
    printf("\n");
}    
}
// OUTPUT-
// Enter the value of arr[0][0]1
// Enter the value of arr[0][1]2
// Enter the value of arr[1][0]3
// Enter the value of arr[1][1]4
// Enter the value of arr[2][0]5
// Enter the value of arr[2][1]6
//  1 2
//  3 4
//  5 6