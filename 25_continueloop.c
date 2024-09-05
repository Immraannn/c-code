#include<stdio.h>
int main(){
for(int i=0;i<5;i++){
    if(i==3){
        continue;//skip this iterartion
    }
    printf("i is %d\n",i);
}   
}
// OUTPUT-
// i is 0
// i is 1
// i is 2
// i is 4