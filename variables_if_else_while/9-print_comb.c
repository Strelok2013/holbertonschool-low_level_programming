#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i = 0;
  for (i = 0; i < 10; i++)
    {
      if(i != 9)
	{
	  putchar(i + 48);
	  putchar(44);
	  putchar(32);
	}
      else
	{
	  putchar(i + 48);
	}
    }
    return(0);
}
