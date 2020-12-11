#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[3], ar=0, ab=0,i=0, su=0;
    printf("Ingrese cuatro numeros: ");
    for(i=0;i<4;i++)
    {
        scanf("%d", &num[i]);
        if(num[i]==0)
         {
           printf("\nError\t");
        }

        su= num[0]+num[3];
    }
    for(i=0;i<3;i++)
    {
        if (num[i]<num[i+1])
        {
            ar++;
        }
        if (num[i+1]<num[i])
        {
            ab++;
        }
    }
    if(ar==3)
    {
        printf("Es Ascendente");
    }

      else if(ab==3)
        {
            printf("Es Descendente");
        }
        else
        {
            printf("Esta desordenada");
        }

    printf("\nLa suma entre en primer numero y el ultimo es : %d",su);

    return 0;
}

