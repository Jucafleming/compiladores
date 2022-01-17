/**@<keywords.c>::**/
#include <keywords.h>
#include <string.h>

char *keyword[] = {"quit", "exit", "bye",};

int iskeyword(const char *name)
{
	int i;
	for(i = QUIT; i <= BYE; i++) {
		if (strcmp(keyword[i - QUIT], name) == 0) return i;
	}
	return 0;
}
