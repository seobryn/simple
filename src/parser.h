#ifndef SIMPLE_PARSER_H
#define SIMPLE_PARSER_H

#include "error.h"
#include "lexer.h"

Error parse_expression(char *source);

#endif