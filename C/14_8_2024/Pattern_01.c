#include <stdio.h>
int main()
{
  int row, num = 1, col;
  printf("Enter number of row : ");
  scanf("%d", &row);
  printf("Enter number of col : ");
  scanf("%d", &col);

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= col; j++)
    {
      printf("%3d ", i % 2 == 0 ? --num : num++);
    }
    num += col;
    printf("%c", 10);
  }

  return 0;
}