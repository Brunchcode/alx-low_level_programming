#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char reverse_alphabets;

for (reverse_alphabets = 122; reverse_alphabets >= 97; reverse_alphabets--)
{
putchar(reverse_alphabets);
}

putchar('\n');

return (0);

}
