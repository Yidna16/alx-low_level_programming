#include <stdlib.h>
/**
 * _calloc-return nmemb * size amount of memory
 * @nmemb:array elements
 * @size:size of bytes
 * Return:pointer to chanck of memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *p;
int i, n = nmembi * size;
if (nmemb < 1 || size < 1)
{
return (NULL);
}
p = (int *) malloc((nmemb * size) * sizeof(int));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i <= n; i++)
{
p[i] = 0;
}
return (p);
}
