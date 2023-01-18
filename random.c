#include <stdlib.h>
#include <time.h>


/**
*	Returns a random character.
*/
int randchar() {
	return "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[random() % 26];
}

