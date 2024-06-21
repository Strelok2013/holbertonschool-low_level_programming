#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i = 0;
  for(i = 0; i < 10; i++)
    {
      putchar(i + 48);
    }
  for(i = 0; i < 6; i++)
    {
      putchar(i + 97);
    }
  putchar(12);
  return(0);
}
