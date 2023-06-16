//using if-else
#include<stdio.h>
void greatest_No(int x,int y){
    
    if(x>y)
    printf("%d is greater\n",x);
    else
    printf("%d is greater\n",y);
}
void main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    greatest_No(a,b);
}
