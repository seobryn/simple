#ifndef SIMPLE_LEXER_H
#define SIMPLE_LEXER_H

#include "error.h"

Error OK = {Error::ERROR_NONE, nullptr};

Error lex(char *source, char **begin, char **end);

#endif