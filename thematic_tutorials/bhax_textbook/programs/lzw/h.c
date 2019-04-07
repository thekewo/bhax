#include <stdio.h>
#include <unistd.h>

int
main (void)
{
  char hexa_jegyek[] = { 'A', 'B', 'C', 'D', 'E', 'F' };

  int paratlan = 0, elso = 0, masodik = 0, i = 0;

  while ((i = getchar ()) != EOF)
    {

      switch (i)
	{

	case 'T':
	  masodik = 0;
	  break;
	case 'C':
	  masodik = 1;
	  break;
	case 'A':
	  masodik = 2;
	  break;
	case 'G':
	  masodik = 3;
	  break;
	}

      if (paratlan)
	{

	  int jegy = 4 * elso + masodik;

	  if (jegy < 10)
	    printf ("%d", jegy);
	  else
	    printf ("%c", hexa_jegyek[jegy - 10]);

	}
      paratlan = !paratlan;
      elso = masodik;
    }
}
