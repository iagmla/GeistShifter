#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include <stdint.h>
#include "geistshifter52i.c"

/* Das GeistShifter 52i v0.0.4 */
/* by Karl Zander */

void usage() {
    printf("Das GeistShifter 52i v0.0.4\n");
    printf("by KryptoMagick\n\n");
    printf("Usage: gs52i <-e/-d> <input file> <output file> <key length 52>\n");
}

int main(int argc, char *argv[]) {
    char *encryptSymbol = "-e";
    char *decryptSymbol = "-d";
    char *inFilename, *outFilename;
    uint8_t *key;
    char *mode = argv[1];
    inFilename = argv[2];
    outFilename = argv[3];
    key = argv[4];

    if (argc != 5) {
        usage();
        return 0;
    }

    if (strcmp(mode, encryptSymbol) == 0) {
        gs52encrypt(inFilename, outFilename, key);
    }
    else if (strcmp(mode, decryptSymbol) == 0) {
        gs52decrypt(inFilename, outFilename, key);
    }
    return 0;
}
