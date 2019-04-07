#include <iostream>
#include <cstdio>

int main()
{
	int egy_e;
	char b;
	
	while( (b = std::cin.get()) != EOF )
	{
		for (int i = 0; i < 8; ++i)
		{
			egy_e = b & 0x80;
			if ((egy_e >> 7) == 1)
				std::cout << "1";
			else
				std::cout << "0";
			b <<= 1;
		}
	}
}
