#ifndef SIMPLE_ERROR_H
#define SIMPLE_ERROR_H

#include <stdio.h>

typedef struct Error
{
    enum ErrorType
    {
        ERROR_NONE = 0,
        ERROR_ARGUMENTS,
        ERROR_TYPE,
        ERROR_GENERIC,
        ERROR_SYNTAX,
        ERROR_TODO,
    } type;

    char *message;
} Error;

#define ERROR_PREP(err, t, m) \
    err.type = t;             \
    err.message = m

void print_error(Error err)
{
    if (err.type == Error::ERROR_NONE)
    {
        return;
    }

    printf("ERROR: ");
    switch (err.type)
    {
    default:
        printf("Unknown error");
        break;
    case Error::ERROR_ARGUMENTS:
        printf("Invalid arguments");
        break;
    case Error::ERROR_TYPE:
        printf("Type Mismatch");
        break;
    case Error::ERROR_GENERIC:
        printf("Generic error");
        break;
    case Error::ERROR_SYNTAX:
        printf("Syntax error");
        break;
    case Error::ERROR_TODO:
        printf("TODO (not implemented yet)");
        break;
    }
    putchar('\n');
    if (err.message)
    {
        printf("     : %s\n", err.message);
    }
}

#endif