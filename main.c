#include <stdio.h>

int main() {
  int a, b, sum;
  
  printf("Enter first and second integer: ");
  scanf("%d %d",&a,&b);
  sum = a + b;
  
  printf("The sum of two numbers is %d\n", sum);
  
  return 0;
}
