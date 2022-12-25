// Reverse any number using c program



// Code 1:
// 1. Write a c program to reverse a given number
// 2. C program to find reverse of a number
// 3. C program to reverse the digits of a number
// 4. Reverse of a number in c using while loop

#include<stdio.h>
int main(){
    int num,r,reverse=0;

    printf("Enter any number: ");
    scanf("%d",&num);

    while(num){
         r=num%10;
         reverse=reverse*10+r;
         num=num/10;
    }

    printf("Reversed of number: %d",reverse);
    return 0;
}

// Sample output:
// Enter any number: 12
// Reversed of number: 21

// Code 2:
// 1. Reverse very large or big numbers beyond the range of long int
// 2. Reverse five digit number c program

// Logic is we accept the number as string

#include<stdio.h>
#define MAX 1000

int main(){

    char num[MAX];
    int i=0,j,flag=0;

    printf("Enter any positive integer: ");
    scanf("%s",num);

    while(num[i]){
         if(num[i] < 48 || num[i] > 57){
             printf("Invalid integer number");
             return 0;
         }
         i++;
    }

    printf("Reverse: ");
    for(j=i-1;j>=0;j--)
         if(flag==0 &&  num[j] ==48){
         }
         else{
             printf("%c",num[j]);
             flag =1;
         }

    return 0;

// Sample output:

// Enter any positive integer: 234561000045645679001237800000000000
// Reverse: 8732100976546540000165432
/*
Code 3:
1. C program to reverse a number using for loop
2. How to find reverse of a number in c
3. Wap to reverse a number in c
*/
#include<stdio.h>
int main(){
    int num,r,reverse=0;

    printf("Enter any number: ");
    scanf("%d",&num);

    for(;num!=0;num=num/10){
         r=num%10;
         reverse=reverse*10+r;
    }

    printf("Reversed of number: %d",reverse);
    return 0;
}
/*
Sample output:
Enter any number: 123
Reversed of number: 321
*/
// Code 4:
// 1. C program to reverse a number using recursion

#include<stdio.h>
int main(){
    int num,reverse;

    printf("Enter any number: ");
    scanf("%d",&num);

    reverse=rev(num);
    printf("Reverse of number: %d",reverse);
    return 0;
}

int rev(int num){
    static sum,r;

    if(num){
         r=num%10;
         sum=sum*10+r;
         rev(num/10);
    }
    else
         return 0;

    return sum;
}

// Sample output:
// Enter any number: 456
// Reverse of number: 654
