#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i=1, n=0, o=0, o1=1,s;
  printf("Ingrese un numero: ");
  scanf("%d", &n);

  for (i = 1; i <= n; ++i)
  {
      printf("%d,", o);
      s = o + o1;
      o = o1;
      o1 = s;
  }

  return 0;
}
