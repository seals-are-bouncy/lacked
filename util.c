#include "util.h"

void strcat_c (char *str, char c)
  {
    for (;*str;str++); // note the terminating semicolon here. 
    *str++ = c; 
    *str++ = 0;
  }
