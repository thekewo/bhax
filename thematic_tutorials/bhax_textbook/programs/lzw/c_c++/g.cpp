#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> amino_sav {
  "Stop",
  "Phe",
  "Leu",
  "Ile",
  "Met",
  "Val",
  "Ser",			// 6.
  "Pro",
  "Thr",
  "Ala",
  "Tyr",			// 10.
  "His",
  "Gln",
  "Asn",
  "Lys",
  "Asp",
  "Glu",
  "Cys",
  "Trp",			// 18.
  "Arg",			// 19.
  "Gly"				// 20.
};

// a 3 betű melyik aminosavat kódolja?
std::string genetikai_kod (int triplet)
{
  int index = 0;

  switch (triplet)
    {
    case 0:			// Phe
    case 1:
      index = 1;
      break;
    case 2:			// Leu
    case 3:
    case 16:
    case 17:
    case 18:
    case 19:
      index = 2;
      break;
    case 32:			// Ile
    case 33:
    case 34:
      index = 3;
      break;
    case 35:			// Met
      index = 4;
      break;
// hogy jön ez? az 5 indexű a "Val"
// GTT-től GTG-ig van ez, jegyekben:
// 300-tól 303-ig 4-es számrendszerben
// ez van átváltva, pl.:
//      303(4) -> 3*16+0*4+3*1 = 51(10)      
    case 48:
    case 49:
    case 50:
    case 51:
      index = 5;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      index = 6;
      break;
    case 20:
    case 21:
    case 22:
    case 23:
      index = 7;
      break;
    case 36:
    case 37:
    case 38:
    case 39:
      index = 8;
      break;
    case 52:
    case 53:
    case 54:
    case 55:
      index = 9;
      break;
    case 8:
    case 9:
      index = 10;
      break;
    case 10:			// Stop
    case 11:
      index = 0;
      break;
    case 24:
    case 25:
      index = 11;
      break;
    case 26:
    case 27:
      index = 12;
      break;
    case 40:
    case 41:
      index = 13;
      break;
    case 42:
    case 43:
      index = 14;
      break;
    case 56:
    case 57:
      index = 15;
      break;
    case 58:
    case 59:
      index = 16;
      break;
    case 12:			// Cys
    case 13:
      index = 17;
      break;
    case 14:			// Stop
      index = 0;
      break;
    case 15:			// Trp
      index = 18;
      break;
    case 28:			// Arg
    case 29:
    case 30:
    case 31:
      index = 19;
      break;
    case 44:			// Ser
    case 45:
      index = 6;
      break;
    case 46:			// Arg
    case 47:
      index = 19;
      break;
    case 60:			// Gly
    case 61:
    case 62:
    case 63:
      index = 20;
      break;
    default:
	  std::cout << "Zavar az eroben " << triplet << "-nel";
      index = 0;
      break;
    }

  return amino_sav[index];
}

// a betűket 3-asával "olvasom": nem kell cifrázni! egy ciklus
// elvégzi, amiben megjegyzem, hogy melyik hányadik betű volt
// aki ciklusban ciklusolgat, az már bénázik :)
int main ()
{
  // hányadik betűn állok?
  int hanyadik_betu = -1;
  // azon a helyen mit olvastam?
  int elso = 0, masodik = 0, harmadik = 0, i = 0, jegy = 0;

  while ( (i = std::cin.get()) != EOF)
    {
    switch (i)
	{
	case 'T':
	  jegy = 0;
	  break;
	case 'C':
	  jegy = 1;
	  break;
	case 'A':
	  jegy = 2;
	  break;
	case 'G':
	  jegy = 3;
	  break;
	}

    hanyadik_betu = (hanyadik_betu + 1) % 3;

      if (!hanyadik_betu)
	elso = jegy;
      else if (!(hanyadik_betu - 1))
	masodik = jegy;
      else
	{
	  harmadik = jegy;
	  std::cout << genetikai_kod (elso * 16 + masodik * 4 + harmadik);
	}
    }
}
