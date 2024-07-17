#ifndef SIMPLE_UTIL_H
#define SIMPLE_UTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "config.h"

size_t get_file_size(FILE *file)
{
    fseek(file, 0, SEEK_END);
    size_t size = ftell(file);
    fseek(file, 0, SEEK_SET);
    return size;
}

char *read_file_content(char *file_path)
{
    FILE *file = fopen(file_path, "r");
    if (!file)
    {
        printf("Cannot open file %s\n", file_path);
        return nullptr;
    }

    size_t size = get_file_size(file);

    char *contents = (char *)malloc(size + 1);
    if (!contents)
    {
        printf("Cannot allocate memory\n");
        return nullptr;
    }
    size_t bytes_readed = fread(contents, 1, size, file);
    if (bytes_readed != size)
    {
        free(contents);
        return nullptr;
    }
    fclose(file);
    contents[size] = '\0';
    return contents;
}

void print_usage()
{

    printf("Usage: simple <file-to-compile> [OPTIONS]\n");
    printf("Options:\n");
    printf("  -h, --help           show this help message and exit\n");
    printf("  -v, --version        show program's version number and exit\n");
}

#endif