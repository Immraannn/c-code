#include<stdio.h>
int main(){
  int n;
  printf("Enter the value of n");
  scanf("%d",&n);
  
    
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
}
// OUTPUT-
// Enter the value of n4
// 4 X 1 = 4
// 4 X 2 = 8
// 4 X 3 = 12
// 4 X 4 = 16
// 4 X 5 = 20
// 4 X 6 = 24
// 4 X 7 = 28
// 4 X 8 = 32
// 4 X 9 = 36
// 4 X 10 = 40