#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

class Binfa
{
public:
	int ertek;
	Binfa *bal;
	Binfa *jobb;

	Binfa(int x)
	{
		ertek=x;
		bal=NULL;
		jobb=NULL;
	}

};
Binfa *gyoker;

	Binfa* beszur(Binfa *elem, int x)
	{
		if( x == 0 )
		{
			if ( elem->bal == NULL )
			{
				elem->bal = new Binfa(x);
				return gyoker;
			}
			else 
			{
				return elem->bal;
			}
		}

		else if ( x == 1 )
		{
			if ( elem->jobb == NULL )
			{
				elem->jobb= new Binfa(x);
				return gyoker;
			}
			else
			{
				return elem->jobb;
			}
		}
		return NULL;
	}

int maxmelyseg = 0;
int melyseg = 0;
int atlagdb = 0;
int atlagosszeg = 0;
double szorasosszeg = 0;
double szoras = 0;
double atlag = 0;


void kiir(Binfa *fa)
{
	if ( fa != NULL )
	{
		++melyseg;
		if ( melyseg > maxmelyseg )
		{
			maxmelyseg= melyseg;
		}

		kiir ( fa->jobb );
		for(int i=0 ; i < melyseg ; ++i)
		{
			cout << "---";
		}
		cout << (char)(fa->ertek < 2 ? '0' + fa->ertek : fa->ertek) << '(' <<  melyseg -1 << ')' << endl;
		kiir ( fa->bal );
		--melyseg;
	}
}

void eatlag(Binfa *fa)
{
	if (fa != NULL)
	{
   		++melyseg;
   		eatlag ( fa->jobb );
   		eatlag ( fa->bal );
  		--melyseg;

		if ( fa->bal == NULL && fa->jobb == NULL )
		{
			++atlagdb;	
			atlagosszeg+=melyseg;
		}
	}
}

void eszoras(Binfa *fa)
{
	if ( fa != NULL )
    {
      	++melyseg;
      	eszoras (fa->jobb );
      	eszoras (fa->bal );
      	--melyseg;

    	if ( fa->bal == NULL && fa->jobb == NULL)
      	{
			++atlagdb;
	  		szorasosszeg += ((melyseg - atlag) * (melyseg - atlag));
		}
	}
}

void szabadit(Binfa *fa)
{
	if ( fa != NULL )
	{
		szabadit( fa->jobb );
		szabadit( fa->bal );
		delete (fa);
	}
}



int main()
{
	char szam;
	Binfa *aktualis;
	gyoker= new Binfa('/');
	aktualis=gyoker;

	while ( read (0, (void *) &szam, 1) )
	{
	  	if ( szam == '1')
	    {
	    	aktualis= beszur(aktualis, 1);
	    }
	  	else if(szam == '0')
	  	{
	  		aktualis= beszur(aktualis, 0);
	 	} 	

	}



	cout << '\n';
	kiir(gyoker);

	cout << "melyseg: " << maxmelyseg-1 <<endl;
	
	atlagosszeg = 0;
  	melyseg = 0;
  	atlagdb = 0;
  	eatlag(gyoker);
  	atlag = ( (double)atlagosszeg / atlagdb );

  	cout << "atlag: " << atlag <<endl;

  	atlagosszeg = 0;
  	melyseg = 0;
  	atlagdb = 0;
  	szorasosszeg = 0;
  	eszoras(gyoker);
  	
 	if (atlagdb - 1 > 0)
 	{
    	szoras = sqrt (szorasosszeg / (atlagdb - 1));
 	}
  	else
  	{
    	szoras = sqrt (szorasosszeg);
  	}

  	cout << "szoras: " << szoras <<endl;

  	szabadit(gyoker);

  	return 0;

}