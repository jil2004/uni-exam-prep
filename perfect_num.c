/* Definition of perfect number or What is perfect number? 

Perfect number is a positive number which sum of all positive divisors excluding that number is equal to that number. For example 6 is perfect number since divisor of 6 are 1, 2 and 3.  Sum of its divisor is
1 + 2+ 3 =6

Note: 6 is the smallest perfect number.

Next perfect number is 28 since 1+ 2 + 4 + 7 + 14 = 28
Some more perfect numbers: 496, 8128
  */



// Code 1:
// 1. C program to check perfect number

#include<stdio.h>
int main(){
  int n,i=1,sum=0;

  printf("Enter a number: ");
  scanf("%d",&n);

  while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
  }
  if(sum==n)
      printf("%d is a perfect number",i);
  else
      printf("%d is not a perfect number",i);

  return 0;
}

/* Sample output:
Enter a number: 6
6 is a perfect number 
*/

// Code 2:
// 1. C program to find perfect numbers
// 2. C perfect number code
// 3. Perfect number program in c language

#include<stdio.h>
int main(){
  int n,i,sum;
  int min,max;

  printf("Enter the minimum range: ");
  scanf("%d",&min);

  printf("Enter the maximum range: ");
  scanf("%d",&max);

  printf("Perfect numbers in given range is: ");
  for(n=min;n<=max;n++){
    i=1;
    sum = 0;

    while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
    }

    if(sum==n)
      printf("%d ",n);
  }

  return 0;
}

/*Sample output:
Enter the minimum range: 1
Enter the maximum range: 20
Perfect numbers in given range is: 6 
*/

/*Code 3:
3. C program to print perfect numbers from 1 to 100 
*/

#include<stdio.h>
int main(){
  int n,i,sum;
 
  printf("Perfect numbers are: ");
  for(n=1;n<=100;n++){
    i=1;
    sum = 0;

    while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
    }

    if(sum==n)
      printf("%d ",n);
  }

  return 0;
}

// Output:
// Perfect numbers are: 6 28
