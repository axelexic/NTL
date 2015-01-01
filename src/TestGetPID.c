

#include <NTL/config.h>

#include <stdlib.h>
#include <stdio.h>

unsigned long _ntl_GetPID();


int main()
{
   printf("%lu\n", _ntl_GetPID());
   return 0;
}
