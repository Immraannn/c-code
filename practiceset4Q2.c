#include<stdio.h>
int main(){
  int n;
  printf("Enter the value of n");
  scanf("%d",&n);
  
    
    for(int i=10;i;i--){
        printf("%d X %d = %d\n",n,i,n*i);
    }
}
// OUTPUT-
// Enter the value of n3
// 3 X 10 = 30
// 3 X 9 = 27
// 3 X 8 = 24
// 3 X 7 = 21
// 3 X 6 = 18
// 3 X 5 = 15
// 3 X 4 = 12
// 3 X 3 = 9
// 3 X 2 = 6
// 3 X 1 = 3