#include<stdio.h>
int main(){
    int a=4;
    printf("%d %d %d\n",a,++a,a++);
    return 0;
    //if compiler evaluation order is L-R then 4 5 5
    //if compiler evaluation order is R-L then 6 6 4
}
// OUTPUT-
// 6 6 4