#include <stdio.h>
#include "../include/myfile.h"

char *sgs_clib_strcat(char *dest, const char *src)
{
   while(*dest!='\0')
   {
       dest++;
   }

   for(;*src!='\0';dest++,src++)
   {
       *dest=*src;
   }

   *dest='\0';

}