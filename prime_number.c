/*Check given number is prime number or not using c program
Definition of prime number:

A natural number greater than one has not any other divisors except 1 and itself. In other word we can say which has only two divisors 1 and number itself. For example: 5

Their divisors are 1 and 5.



Note: 2 is only even prime number.



Logic for prime number in c

We will take a loop and divide number from 2 to number/2. If the number is not divisible by any of the numbers then we will print it as prime number.

Example of prime numbers : 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199 etc.

Code 1:
1. C program to determine prime number
2. Determining if a number is prime in c
3. C program to find given number is prime or not
*/

#include<stdio.h>

int main(){

    int num,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
         count++;
            break;
        }
    }
   if(count==0 && num!= 1)
        printf("%d is a prime number",num);
   else
      printf("%d is not a prime number",num);
   return 0;
}

// Sample output:
// Enter a number: 5
// 5 is a prime number
/*
Code 2:
1. C program for prime numbers between 1 to 100
2. How to find prime numbers from 1 to 100 in c
3. How to print prime numbers from 1 to 100 in c
*/

#include<stdio.h>

int main(){
    int num,i,count;
  
    for(num = 1;num<=100;num++){
         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             printf("%d ",num);
    }
  
   return 0;
}

/* Output:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/

/*
Code 3:
1. C program for prime numbers between 1 to n
2. C program to find prime numbers up to n
3. C program to list prime numbers
4. Write a c program to generate n prime numbers
5. C program to find n prime numbers
*/

#include<stdio.h>

int main(){

    int num,i,count,n;
    printf("Enter max range: ");
    scanf("%d",&n);

    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             printf("%d ",num);
    }
  
   return 0;
}

// Sample output:
// Enter max range: 50
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
  
/* Code 4:
1. C program to find prime numbers using while loop
2. Wap to find prime numbers in c
3. Write a c program to generate prime number
4. How to get prime numbers in c
*/

#include<stdio.h>

int main(){

   int num,i,count,min,max;

printf("Enter min range: ");
    scanf("%d",&min);

    printf("Enter max range: ");
    scanf("%d",&max);

    num = min;
    while(num<=max){

         count = 0;
         i=2;

         while(i<=num/2){
             if(num%i==0){
                 count++;
                 break;
             }
             i++;
        }
        
         if(count==0 && num!= 1)
             printf("%d ",num);

         num++;
    }
  
   return 0;
}

// Sample output:
// Enter min range: 50
// Enter max range: 100
// 53 59 61 67 71 73 79 83 89 97
/* 
Code 5:
1. How to find out prime numbers in c programming
2. Display prime numbers in c
3. C program to find prime numbers between two numbers
4. C code to display prime numbers within a range
*/ 

#include<stdio.h>

int main(){

    int num,i,count,min,max;

     printf("Enter min range: ");
     scanf("%d",&min);

    printf("Enter max range: ");
    scanf("%d",&max);

    for(num = min;num<=max;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             printf("%d ",num);
    }
  
   return 0;
}

/*
Sample output:
Enter min range: 10
Enter max range: 50
11 13 17 19 23 29 31 37 41 43 47
*/

//Code 6:
// 1. Sum of prime numbers from 1 to 100 in c

#include<stdio.h>

int main(){

    int num,i,count,sum=0;

    for(num = 1;num<=100;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             sum = sum + num;
    }

    printf("Sum of prime numbers is: %d ",sum);
  
   return 0;
}
  
// Output:
// Sum of prime numbers is: 1060

// Code 7:
// 1. C program to find sum of prime numbers

#include<stdio.h>

int main(){

    int num,i,count,min,max,sum=0;

     printf("Enter min range: ");
     scanf("%d",&min);

    printf("Enter max range: ");
    scanf("%d",&max);

    for(num = min;num<=max;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             sum = sum + num;
    }

    printf("Sum of prime numbers is: %d ",sum);
  
   return 0;
}

// Sample output:
// Enter min range: 50
// Enter max range: 100
