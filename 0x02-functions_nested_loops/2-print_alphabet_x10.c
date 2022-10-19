#include "main.h"
/**
 * print_alphabet_x10 - print 10x the alphabet in lower case
 */

void print_alphabet_x10(void)

{
int ten;
char la;

for (ten = 0; ten <= 'z'; la++)
{
for (la = 'a'; la <= 'z'; la++)
_putchar(la);
_putchar('\n');
}

}
