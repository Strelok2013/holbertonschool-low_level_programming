#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  for(int i = 0; i < 26; i++)
    {
      putchar(122 - i);
    }
  putchar(12);
  return (0);
}
