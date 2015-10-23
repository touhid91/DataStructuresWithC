/*
 * @touhid91
 * Program 4.12
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
        char *Z = NULL,
              TEXT[] = "Welcome to Vermont!";

        /*
         * void *malloc(size_t byte_size)
         */

        Z = (char *)malloc(strlen(TEXT));
        strcpy(Z, TEXT);
        printf("%s\n",Z);
        return 0;
}
