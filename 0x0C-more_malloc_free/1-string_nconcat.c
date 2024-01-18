#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
void *p = malloc(strlen(s1)+strlen(s2)+1);
char concatStr[];
strcpy(concatStr, s1);

if ( p == NULL )
{
return NULL;
}

if (n >= strlen(s2)){
strncat(concatStr,s2 , n);
}else{
strcat(concatStr,s2); 
}

printf("%s\n",concatStr);
return p;
}
