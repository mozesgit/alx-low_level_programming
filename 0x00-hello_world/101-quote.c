#include <stdio.h>
#include <unistd.h>

/*
 *C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19.
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

