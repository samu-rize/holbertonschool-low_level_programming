#ifndef LIST_HF
#define LIST_HF

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_s
{
    char *str;
    unsigned short int len;
    struct list_s *next;
}list_t;

size_t print_list(const list_t *h);

#endif