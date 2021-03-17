#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero=0;
    int divisores=0;
    int primo=0; 
    do
    {
        scanf(" %d",&numero);
        if(numero!=-1 && numero>0)
        {
            primo=0;
            divisores=2;
            while(divisores<numero  && primo!=1)
            {
                if(numero%divisores==0) primo=1;
                divisores++;
            }
            if (primo==0)
            {
                printf("Es primo");
            }
            else
            {
                printf("No es primo");
            }
        }
    } while(numero!=-1);
    return 0;
}
