#ifndef MAIN_IO
#define MAIN_IO

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif