#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    void *foo = malloc(1);

    free(foo);
    free(foo);
}
