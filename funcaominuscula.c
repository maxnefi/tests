#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

void strncase (char* s)
{
   char notcase (char c)
   {
       if((c >= 'A') && (c <= 'Z'))
           return 'a' + (c - 'A');

       return c;
   }
   while(*s != '\0')
   {
       *s = notcase(*s);
       s++;
   }
}
