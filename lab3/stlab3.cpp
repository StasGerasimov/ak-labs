#include "stdio.h"
#include "stdlib.h"
#include "getopt.h"
#include "unistd.h"


void usage(char *name)
{
    printf("HELP: %s\n\t-h help message\n\t-f [config file]\n\t--help help message\n\t--file [config_file]\n", name);
    return;
}

int main (int argc, char *argv[])
{
    int f;
    while (1) {
        static struct option long_opt[] = {
            {"help", 0, 0, 'h'},
            {"file", 1, 0, 'f'},
            {0,0,0,0}
        };

        int optIdx;

        if ((f = getopt_long(argc, argv, "f:h", long_opt, &optIdx)) == -1)
            break;
        switch( f ){
            case 'h':
                usage(argv[0]);
                return(-1);

            case 'f':
                printf("option 'f' selected, filename: %s\n", optarg);
                return(1);

            default:
                usage(argv[0]);
                return(-1);
        }
    }

    return(0);
}
