#include<stdio.h>
int main(){
    char ch='A';
    printf("The character is %c \n",ch);
    printf("The value of character is%d \n",ch);
    //97,122
    if (ch >=97 && ch<=122){
        printf("This character is lowercase");
    }
    else{
        printf("This character is not lower case");
    }
}
// OUTPUT-
// The character is A 
// The value of character is65
// This character is not lower case