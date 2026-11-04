#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 'a';
    char min = 'a';
    char may = 'A';
    int minA, mayA;
    printf("\nEscribe un caracter: ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
    {
        printf("\n -%c es Mayuscula", c);

        min = c - 'A' + 'a';
        minA = (int)min;

        printf("\n Su minuscula es %c y el codigo ASCII es %i", min, minA);
    }

    if (c >= 'a' && c <= 'z')
    {
        printf("\n -%c es Minuscula", c);

        may = c - 'a' + 'A';
        mayA = (int)may;

        printf("\n Su mayuscula es %c y el codigo ASCII es %i", may, mayA);
    }
    return 0;
}
