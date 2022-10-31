#include "main.h" 

/**
* _memcpy -> memory copy
* @dest: is destination memory
* @src: is source memory
* @n: number of bytes 
* Return: string copied from source
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{	
unsigned int c;

for (c = 0; c < n; c++)
dest[c] = src[c];
return (dest);
}
