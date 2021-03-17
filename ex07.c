#include <stdio.h>

int main(void)
{
    int mayus = 0, minus = 0;
    char ch[80];
    int i = 0;
    printf("\nIngrese palabra: \n");
    fgets(ch, sizeof(ch), stdin);
    while (ch[i] != '\0')
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
            mayus++;
        if (ch[i] >= 'a' && ch[i] <= 'z')
            minus++;
        i++;
    }
    printf("Numero de mayusculas: %d \nNumero de minusculas: %d", mayus, minus);
    return 0;
}
