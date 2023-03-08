#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int k = n;
  int l = n;
  for (int i = 0; i < k; i++)
  {
    for (int j = 0; j < k; j++)
    {
      if (j < k - i)
        printf("*");
      else
        printf(" ");
    }
    for (int j = 0; j < k - 1; j++)
    {
      if (j >= i - 1)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  // printf("\n");
  l--;
  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < l+1; j++)
    {
      if (j <= i+1)
        printf("*");
      else
        printf(" ");
    }
    for (int j = 0; j < l; j++)
    {
      if (j < l-2-i)
        printf(" ");
      else 
        printf("*");
    }
    printf("\n");
  }
}