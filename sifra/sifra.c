#include <stdio.h>
#include "pass.h"

int main()
{
	// Ovdje trebate inicijale date u uid zamijeniti sopstvenim	
	char uid[] = "md";	
	char pass[7];
	int p = 0;

	p = GiveMePass(uid, pass);
	
	if (p == 0)
	{
		printf("Ulogujte se na RPi sa korisnickim imenom %s i sifrom %s\n", uid, pass);
		printf("Zatim pronadjite skriveni folder u home direktorijumu za dalje instrukcije.\n");
	}
	
	return 0;
}
