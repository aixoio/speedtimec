#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    if (argc <= 1)
    {

        printf("Usage: <command>\n");
        return 0;
    }

    printf("\nStarting...\n\n");

    time_t starttime = time(NULL);

    system(argv[1]);

    time_t endtime = time(NULL);

    printf("\nEnding...\n\n");

    unsigned int length = endtime - starttime;

    printf("Command ran in %d seconds!\n", length);

    printf("Start time: %ld\n", starttime);
    printf("End time: %ld\n", endtime);

    return 0;
}
