#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  for (int i = 0; i < 10; i++)
    {
      putchar(i + 48);
      putchar(44);
      putchar(32);
    }
  putchar(12);
}
