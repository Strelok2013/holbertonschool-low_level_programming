#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i = 0;
  for(i = 0; i < 26; i++)
    {
      putchar(122 - i);
    }
  putchar(12);
  return (0);
}