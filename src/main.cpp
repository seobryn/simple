
#include "util.h"
#include "parser.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        print_usage();
        exit(EXIT_SUCCESS);
    }
    else if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
    {
        print_usage();
        exit(EXIT_SUCCESS);
    }
    else if (strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0)
    {

        printf("simple version: %s\n", SIMPLE_VERSION_STR);
        exit(EXIT_SUCCESS);
    }

    char *file_path = argv[1];
    char *file_content = read_file_content(file_path);

    if (file_content)
    {
        printf("Original Content of [%s]: \n----\n%s\n----\n", file_path, file_content);
        free(file_content);
    }

    Error err = parse_expression(file_content);
    print_error(err);

    return EXIT_SUCCESS;
}
