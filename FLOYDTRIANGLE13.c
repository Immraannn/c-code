#include<stdio.h>
int main(){
int n;
printf("Enter the numbewr of rows:");
scanf("%d",&n);
int a=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
     
     printf("%d",a);
     a++; 
    }
    printf("\n");
}    
}
// OUTPUT-
// Enter the numbewr of rows:4
// 1
// 23
// 456
// 78910