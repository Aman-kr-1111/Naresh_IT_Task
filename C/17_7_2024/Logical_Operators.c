#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter 1st number : ");
  scanf("%d", &a);
  printf("Enter 2nd number : ");
  scanf("%d", &b);

  printf("a && b = %d\n", a && b);
  printf("a || b = %d\n", a || b);
  printf("!a = %d\n", !a);
  printf("!b = %d\n", !b);
  return 0;
}