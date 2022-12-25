// Swap two variables with using temporary variable.


#include <stdio.h>
int main()
{
  
  int n1,n2,temp;

  printf("Enter two numbers to swap values\n");
  scanf("%d%d", &n1, &n2);

  printf("Before swapping: n1=%d and n2=%d", n1,n2);
  
  temp = n1;
  n1 = n2;
  n2 = temp;
  
  
  printf("\nAfter  swapping: n1=%d and n2=%d", n1,n2);
  

  return 0;
}


// Swap two variable without using temp variable.

#include <stdio.h>
int main()
{
  
  int n1,n2;

  printf("Enter two numbers to swap values without using third variable\n");
  scanf("%d%d", &n1, &n2);

  printf("Before swapping: n1=%d and n2=%d", n1,n2);
  
  n1 = n1 + n2;
  n2 = n1 - n2;
  n1 = n1 - n2;
  
  
  printf("\nAfter  swapping: n1=%d and n2=%d", n1,n2);
  

  return 0;
}
