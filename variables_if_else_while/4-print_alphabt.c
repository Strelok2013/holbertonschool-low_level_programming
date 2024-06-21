#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int i = 0;
  for (i = 97; i < 123; i++)
    {
      if(i != 101 && i != 113)
	{
	  putchar(i);
	}
    }
  putchar(12);

  return(0);
}
