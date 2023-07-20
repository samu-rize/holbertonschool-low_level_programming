#include "function_pointers"

void print_name(char *name, void (*f)(char *))
{
    if (!f || !name)
    {
        return;
    }
    f(name);
}
