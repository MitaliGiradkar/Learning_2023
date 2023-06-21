//using ternary operator
#include<stdio.h>
void greatest_No(int x,int y){
    
  int result= (x>y) ? x : y ;
  printf("greater number=%d",result);
}
void main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    greatest_No(a,b);
}