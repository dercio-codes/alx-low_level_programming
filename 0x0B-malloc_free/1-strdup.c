#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 */

char *_strdup(char *str)

char strAddress , strDuplicate ;
{
  if (str == NULL){
    return (NULL);
  }
  else{
    strAddress = malloc(sizeof(str));
    return strAddress;
  }
}
