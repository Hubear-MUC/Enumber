#include <stdio.h>
#include <stdlib.h>
int a=0,b=0,i=0;
int main(int n, char** p)
{
a=atoi(p[1]);b=atoi(p[2]);
for (i = a; i <= b; ++i)
{
printf ("%d.\n\n", i);
}
}
