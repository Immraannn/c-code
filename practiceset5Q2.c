#include<stdio.h>
float c2f(float c);
float c2f(float c){
return ((9*c)/5)+32;   
}
int main(){
    float c=100;
printf("Celcius to fahreheit for%f is%.0f \n",c,c2f(c));    
}
// OUTPUT-
// Celcius to fahreheit for100.000000 is 212
