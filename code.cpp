#include <stdio.h>
#include <stdlib.h>
int s,e,i;
main(int v, char** c)
{
s = atoi(c[1]);
e = atoi(c[2]);
for(i=s;i<=e;++i)
 {
 printf ("%d.\n\n", i);
 }
}
