#ifndef FILEIO_H
#define FILEIO_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters);

#endif