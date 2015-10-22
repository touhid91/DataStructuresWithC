/*
 * Example 4.18
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]) {
        char MEMBER[25][10] = {
                "Evans"
                , "Harris"
                , "Lewis"
                , "Shaw"
                , "$$$"

                , "Conard"
                , "Wagner"
                , "$$$"

                , "Devis"
                , "Segal"
                , "$$$"
        };

        unsigned short int GROUP[4] = { 0, 5, 8, 11}, L;

        while(cin >> L) {
                if(L == 0 || L > 3) {
                        printf("\n");
                        continue;
                }

                /*
                 * L = 1 -> GROUP[0]
                 */
                unsigned short int START = GROUP[L - 1],
                                   END = GROUP[L] - 1;

                printf("For Group %d,\n", L);
                for (int I = START; I <= END; I++) {
                        printf("Member %d : %s.\n", I+1, MEMBER[I]);
                }
        }

        return 0;
}
