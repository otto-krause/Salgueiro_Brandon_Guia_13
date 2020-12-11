#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[14], i=0;
    for(i=1;i<15;i++)
    {
        printf("\n\nIngresar las notas: \n");
        scanf("%d", &num[i]);
        if(num[i]>8)
        {
            printf("\nEl alumno %d supera 8 puntos", i);
        }
    }
    return 0;
}
