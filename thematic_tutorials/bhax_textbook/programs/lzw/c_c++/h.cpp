#include <iostream>
#include <vector>

int main ()
{
  std::vector<char> hexa_jegyek { 'A', 'B', 'C', 'D', 'E', 'F' };
  int paratlan = 0, elso = 0, masodik = 0, i = 0;

  while ((i = std::cin.get()) != EOF)
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
		std::cout << jegy;
	  else
		std::cout << hexa_jegyek[jegy - 10];
	}
      paratlan = !paratlan;
      elso = masodik;
    }
}