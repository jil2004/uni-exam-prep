// Meter to feet

#include <stdio.h>
int main()
{
  
  int meters;
  float feet;

  printf("Enter the value for meters=");
  scanf("%d", &meters);

  feet = meters * 3.28084;

  printf("%d meters are equal to %.2f feet", meters, feet);

  return 0;
}

// Feet to meters

#include <stdio.h>
int main()
{
  
  
  float feet, meters;

  printf("Enter the value for Feet=");
  scanf("%f", &feet);

  meters = feet / 3.28084;

  printf("%.2f Feet are equal to %.2f Meters", feet, meters);

  return 0;
}
