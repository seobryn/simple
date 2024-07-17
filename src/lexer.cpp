#include "lexer.h"

Error lex(char *source, char **begin, char **end)
{
    Error err = OK;
    if (!source || !begin || !end)
    {
        ERROR_PREP(err, Error::ERROR_ARGUMENTS, "Cannot lex empty source");
        return err;
    }
}