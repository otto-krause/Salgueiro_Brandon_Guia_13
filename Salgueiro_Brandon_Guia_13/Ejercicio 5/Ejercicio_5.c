#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i=0, j=0,ve=0, ma=0, num1[14];
    for(i=0;i<20;i++)
    {
        for(j=0;j<15;j++)
        {
            printf("\nIngrese las unidades vendidas hoy: ");
            scanf("%d", &num1[j]);
            ve+=num1[j];
            if(ma<num1[j])
            {
                ma=num1[j];
            }
        }
        printf("El vendedor %d tiene la mayor venta con: %d unidades vendidas", i, ma);
        j=0;

    }
    printf("\nLas unidades totales vendidas son: %d", ve);
    return 0;

}
