#include <stdlib.h>
void *memmove(void *dst, const void *src , size_t len)
{
    char *dest;
    char *surc;

    dest = (char *)dst;
    surc = (char *)src;
    // will this be a non destructive magner or should it go from behind ?
    /*int i ;
    i = 0;
    while (i < len)
    {
        dest[i] = surc[i];
        i++;
    }*/
   if(dest < surc)
   {
    
   }
}