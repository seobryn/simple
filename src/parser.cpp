#include "parser.h"

Error parse_expression(char *source)
{
    char *begin = source;
    char *end = source;
    Error err = lex(source, &begin, &end);
    return err;
}