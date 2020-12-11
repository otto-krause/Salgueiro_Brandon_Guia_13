#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i=0, p=0 ,b=0;

    printf("Ingrese su sueldo: ");

    for(i=0;i<3;i++)
    {
        scanf("%d", &num);

        if(2000<num)
        {
            p++;
        }
        else
        {
            b++;
        }


    }
    printf("Los que ganan menos son: %d\nLos que ganan mas son: %d", b, p);
    return 0;
}
