#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int i = 0;
  for (i = 97; i < 123; i++)
    {
      putchar(i);
    }
  for (i = 65; i < 91; i++)
    {
      putchar(i);
    }
  putchar(12);
  
  return(0);
}
