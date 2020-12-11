#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[9], su=0,p=1 , e=0, i=0;
    float pro=0;

    printf("Ingrese 10 numeros: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&v[i]);
        su+=v[i];
        p=(p*v[i]);
    }
    pro= (su/10);
    for(i=0;i<10;i++)
    if(v[i]<pro)
    {
        e++;
    }
    printf("La suma total es: %d\nEl producto total es: %d\nEl promedio es: %.3f\nLa cantidad de elementos debajo del promedio es: %d", su, p, pro, e);
    return 0;
}
