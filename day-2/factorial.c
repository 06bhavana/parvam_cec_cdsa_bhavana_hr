#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter a number to find the factorial:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("Factorial of %d: %d",num,fact);
}