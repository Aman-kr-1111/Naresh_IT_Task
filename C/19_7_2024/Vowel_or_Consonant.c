#include <stdio.h>
int main()
{
  char ch;
  printf("Enter your alphabets : ");
  scanf("%c", &ch);

  (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ? printf("%c is an Vowel", ch) : printf("%c is a constant", ch);
  return 0;
}