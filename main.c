#include <stdio.h>
//#define LEN_X    3
//#define LEN_Y    3
#define SIZE_MATRIX    10

int main(void)
{
  unsigned int a[SIZE_MATRIX][SIZE_MATRIX];
  unsigned int i, j;
  for(j = 0; j < SIZE_MATRIX; ++j)
  {
    for(i = 0; i < SIZE_MATRIX; ++i)
    {
      a[i][j] = SIZE_MATRIX*j + i;
      printf("%4d  ", a[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
