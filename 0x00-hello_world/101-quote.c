#include <unistd.h>

/*
 * main - Startung point 
 *
 * Description: printing to console with write function 
 *
 * return: returns an error of 1
 *
 */

int main(void)
{
	char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, sentence, 59);
	return(1);
}
