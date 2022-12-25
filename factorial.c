/*
The factorial of a positive number n is given by:

factorial of n (n!) = 1 * 2 * 3 * 4....n
The factorial of a negative number doesn't exist. And, the factorial of 0 is 1.
*/

// Using For Loop

#include<stdio.h>

int main(){

    int x,fact=1,n;

    printf("Enter a number to find factorial: ");

    scanf("%d",&n); 

    for(x=1;x<=n;x++)

        fact=fact*x; 

    printf("Factorial of %d is: %d",n,fact);

    return 0;

}

// Using While Loop

#include<stdio.h>

int main(){

    int x=1,fact=1,n;

    printf("Enter a number to find factorial: ");

    scanf("%d",&n);

    while(x<=n){

        fact=fact*x;

        x++;

    } 

    printf("Factorial of %d is: %d",n,fact);

    return 0;

}

// Using Recursion

#include <stdio.h>

int main(){

int x = 7;

printf("The factorial of the number is %d", fact(x));

return 0;

}

// Recursive function to find factorial

int fact(int y){

if (y == 0)

return 1;

return y * fact(y - 1);

}

// Using Ternary Operator

#include <stdio.h>

int main(){

int n = 4;

printf("The factorial of %d is %d",

n, fact(n));

return 0;

}

int fact(int x){

// Using ternary operator

return (x == 1 || x == 0)

? 1

: x * fact(x - 1);

}

// Using Function

#include<stdio.h>

int findFact(int);

int main(){

    int x,fact,n;

    printf("Enter a number to get factorial: ");

    scanf("%d",&n);

    fact = findFact(n);

    printf("The factorial of %d is: %d",n,fact);

    return 0;

}

int findFact(int n){

    int x,fact=1;

    for(x=1;x<=n;x++)

      fact=fact*x;

     return fact;

}
