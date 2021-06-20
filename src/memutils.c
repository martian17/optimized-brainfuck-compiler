#include <stdlib.h>
#include <stdio.h>
#include "all.h"

void *safe_malloc(size_t size)
{
    void *ptr = malloc(size);
    if(ptr == NULL)
    {
        // TODO: handle error
        fprintf(stderr, "ran out of memory");
        exit(FAILURE);
    }
    return ptr;
}

void *safe_realloc(void *ptr, size_t size)
{
    ptr = realloc(ptr, size);
    if(ptr == NULL)
    {
        // TODO: handle error
        fprintf(stderr, "ran out of memory");
        exit(FAILURE);
    }
    return ptr;
}
