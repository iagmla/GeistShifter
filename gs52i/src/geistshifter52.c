/* Das GeistShifter 52 */
/* by Karl Zander */

int ctl_rotor[26] = {39, 17, 11, 13, 50, 34, 44, 21, 16, 6, 2, 32, 28, 14, 45, 40, 7, 25, 33, 41, 5, 46, 48, 19, 8, 29, 12, 26, 38, 47, 31, 49, 36, 9, 20, 35, 24, 23, 10, 27, 30, 42, 37, 22, 43, 1, 15, 18, 4, 51, 0, 3};

int rotors[52][26] = {{18, 24, 9, 4, 6, 25, 22, 17, 7, 14, 3, 0, 1, 10, 19, 15, 2, 20, 21, 5, 8, 11, 23, 12, 16, 13}, {3, 19, 9, 25, 24, 10, 16, 13, 6, 5, 15, 12, 14, 11, 0, 4, 20, 17, 2, 18, 8, 1, 22, 23, 21, 7}, {22, 11, 5, 16, 7, 18, 9, 10, 23, 2, 4, 21, 1, 8, 17, 3, 19, 25, 20, 12, 24, 15, 0, 13, 6, 14}, {17, 18, 0, 14, 9, 5, 7, 21, 2, 13, 16, 22, 6, 20, 10, 3, 12, 8, 24, 19, 1, 4, 11, 23, 25, 15}, {3, 8, 16, 25, 15, 18, 13, 21, 5, 10, 0, 22, 4, 9, 1, 23, 14, 6, 17, 11, 24, 20, 2, 19, 12, 7}, {7, 21, 25, 20, 23, 13, 16, 17, 3, 1, 19, 14, 11, 2, 8, 5, 6, 12, 22, 0, 10, 4, 18, 9, 24, 15}, {3, 11, 7, 9, 1, 23, 21, 19, 15, 24, 18, 22, 0, 16, 2, 13, 5, 20, 8, 17, 10, 25, 4, 12, 14, 6}, {1, 16, 15, 10, 8, 9, 23, 14, 0, 11, 17, 3, 6, 12, 2, 25, 18, 19, 5, 7, 24, 13, 4, 21, 20, 22}, {16, 18, 11, 20, 8, 4, 19, 0, 23, 10, 9, 22, 17, 21, 24, 5, 15, 25, 14, 6, 1, 7, 13, 2, 3, 12}, {15, 25, 9, 17, 6, 20, 4, 5, 19, 14, 23, 24, 22, 16, 13, 10, 2, 18, 7, 12, 21, 0, 1, 11, 8, 3}, {12, 23, 24, 4, 19, 18, 6, 7, 25, 14, 9, 21, 0, 8, 22, 5, 1, 11, 16, 13, 15, 2, 3, 17, 20, 10}, {22, 0, 2, 7, 16, 5, 17, 11, 6, 4, 13, 18, 24, 14, 25, 10, 3, 23, 1, 8, 19, 15, 12, 21, 9, 20}, {6, 4, 8, 14, 20, 7, 25, 1, 22, 10, 21, 0, 18, 3, 23, 13, 24, 2, 9, 16, 15, 11, 12, 17, 19, 5}, {4, 13, 6, 0, 9, 23, 2, 7, 12, 25, 14, 8, 21, 10, 16, 1, 5, 20, 15, 18, 17, 24, 22, 3, 11, 19}, {25, 12, 11, 5, 23, 10, 6, 8, 1, 16, 7, 20, 18, 19, 0, 24, 22, 9, 4, 17, 13, 3, 21, 15, 14, 2}, {24, 4, 2, 16, 15, 25, 5, 9, 18, 8, 10, 3, 19, 22, 14, 13, 11, 21, 23, 0, 12, 7, 6, 1, 20, 17}, {1, 13, 23, 16, 5, 17, 19, 0, 7, 2, 10, 4, 22, 8, 11, 6, 9, 12, 25, 14, 18, 15, 21, 24, 20, 3}, {18, 21, 6, 23, 12, 14, 4, 0, 25, 5, 11, 8, 13, 9, 16, 1, 24, 3, 19, 22, 10, 17, 15, 20, 2, 7}, {25, 1, 3, 10, 4, 12, 8, 5, 24, 2, 21, 13, 14, 17, 19, 0, 9, 15, 22, 11, 7, 16, 23, 6, 20, 18}, {23, 8, 10, 9, 14, 20, 24, 21, 7, 12, 4, 18, 15, 5, 2, 22, 13, 19, 0, 16, 6, 25, 3, 17, 11, 1}, {14, 4, 1, 18, 11, 13, 22, 21, 16, 19, 6, 12, 24, 3, 20, 25, 10, 5, 8, 0, 23, 7, 2, 15, 9, 17}, {16, 15, 10, 19, 1, 0, 23, 18, 14, 5, 6, 25, 20, 11, 7, 21, 13, 17, 4, 8, 12, 22, 2, 9, 24, 3}, {5, 16, 10, 9, 4, 18, 22, 6, 25, 23, 17, 11, 0, 21, 19, 24, 2, 12, 3, 20, 8, 14, 13, 7, 15, 1}, {19, 20, 22, 0, 7, 15, 4, 11, 5, 6, 2, 24, 12, 8, 21, 3, 1, 18, 17, 23, 14, 9, 25, 13, 16, 10}, {8, 2, 9, 17, 10, 23, 12, 21, 19, 3, 25, 18, 1, 5, 7, 13, 15, 14, 16, 20, 11, 4, 22, 0, 6, 24}, {20, 14, 23, 25, 2, 5, 18, 17, 8, 7, 12, 22, 3, 15, 10, 21, 4, 1, 11, 24, 13, 19, 0, 9, 6, 16}, {22, 3, 18, 7, 6, 4, 1, 19, 8, 12, 5, 2, 16, 24, 25, 20, 15, 11, 23, 17, 21, 10, 9, 14, 13, 0}, {10, 25, 13, 18, 23, 3, 19, 5, 16, 17, 8, 7, 1, 14, 21, 15, 11, 0, 6, 4, 2, 9, 20, 22, 24, 12}, {18, 8, 9, 7, 20, 22, 24, 13, 23, 14, 21, 15, 11, 3, 12, 19, 17, 1, 4, 0, 16, 6, 2, 5, 25, 10}, {5, 11, 20, 4, 24, 14, 17, 21, 19, 12, 15, 22, 6, 25, 16, 3, 23, 9, 18, 1, 8, 10, 2, 13, 7, 0}, {12, 22, 4, 21, 23, 11, 20, 19, 1, 9, 5, 17, 14, 0, 18, 2, 25, 16, 3, 8, 24, 13, 7, 15, 10, 6}, {1, 23, 24, 0, 20, 7, 3, 5, 10, 6, 4, 13, 25, 8, 2, 12, 14, 22, 9, 21, 18, 15, 17, 16, 19, 11}, {15, 1, 4, 13, 14, 16, 8, 21, 7, 24, 5, 10, 9, 23, 0, 17, 25, 19, 20, 12, 22, 6, 18, 2, 11, 3}, {5, 12, 13, 4, 2, 10, 24, 25, 7, 17, 23, 22, 21, 14, 6, 3, 0, 19, 16, 20, 8, 9, 1, 18, 11, 15}, {7, 24, 14, 23, 8, 0, 20, 16, 12, 11, 3, 1, 9, 13, 6, 2, 22, 21, 5, 19, 25, 18, 15, 4, 10, 17}, {20, 21, 19, 16, 2, 5, 11, 13, 6, 25, 10, 7, 17, 18, 8, 15, 9, 24, 4, 23, 1, 12, 22, 14, 0, 3}, {14, 12, 8, 0, 4, 22, 20, 21, 25, 6, 13, 7, 23, 18, 19, 1, 15, 24, 11, 16, 17, 9, 5, 2, 10, 3}, {13, 25, 4, 11, 24, 12, 10, 20, 18, 9, 21, 15, 3, 22, 19, 6, 16, 5, 14, 2, 7, 23, 1, 8, 17, 0}, {1, 5, 22, 19, 3, 6, 9, 12, 10, 11, 2, 18, 0, 23, 14, 15, 4, 25, 21, 24, 17, 7, 13, 16, 8, 20}, {2, 15, 22, 10, 23, 4, 16, 0, 21, 13, 20, 12, 3, 18, 14, 11, 8, 1, 24, 6, 25, 19, 9, 7, 17, 5}, {3, 16, 9, 19, 0, 14, 8, 22, 4, 23, 6, 20, 12, 24, 21, 5, 11, 15, 17, 13, 7, 1, 10, 25, 2, 18}, {24, 21, 8, 5, 22, 6, 11, 4, 20, 15, 14, 23, 13, 0, 16, 2, 17, 3, 18, 7, 19, 9, 1, 12, 10, 25}, {24, 21, 8, 19, 4, 17, 0, 20, 11, 7, 9, 16, 22, 14, 10, 15, 3, 18, 6, 12, 23, 13, 2, 25, 1, 5}, {14, 17, 16, 25, 6, 7, 12, 9, 3, 5, 19, 24, 1, 4, 0, 13, 18, 8, 10, 2, 21, 11, 23, 20, 22, 15}, {18, 1, 2, 5, 25, 9, 7, 23, 3, 11, 14, 15, 16, 6, 10, 21, 22, 20, 8, 0, 19, 17, 12, 4, 13, 24}, {23, 21, 25, 14, 9, 11, 6, 15, 1, 20, 18, 5, 2, 4, 0, 12, 24, 8, 22, 7, 10, 19, 3, 17, 13, 16}, {13, 7, 21, 12, 11, 2, 15, 25, 1, 6, 23, 14, 22, 8, 9, 18, 16, 5, 20, 10, 17, 0, 19, 3, 24, 4}, {22, 24, 20, 3, 13, 15, 9, 5, 7, 23, 18, 19, 10, 8, 0, 6, 16, 17, 25, 11, 2, 4, 1, 21, 14, 12}, {21, 16, 24, 18, 2, 8, 20, 15, 4, 13, 10, 1, 9, 23, 22, 11, 19, 0, 6, 7, 14, 3, 5, 25, 12, 17}, {22, 2, 25, 6, 8, 3, 4, 5, 19, 21, 9, 0, 17, 20, 11, 12, 15, 24, 10, 1, 14, 7, 16, 13, 23, 18}, {6, 22, 1, 0, 12, 11, 2, 5, 20, 18, 14, 15, 23, 4, 19, 16, 3, 10, 7, 8, 24, 13, 21, 17, 25, 9}, {1, 21, 3, 0, 12, 24, 11, 14, 22, 19, 23, 10, 16, 20, 25, 15, 4, 7, 8, 13, 6, 18, 2, 9, 17, 5}};

struct rotor {
    int r[26];
    int pos;
    int fwContact;
    int bwContact;
};

struct GSmachine {
    struct rotor r[52];
    int ctl[52];
    int key[52];
    int pos;
};

int modadd(int a, int b, int n) {
    int x = (a + b) % n;
    if (x < 0) {
        x += n;
    }
    return x;
}

int modsub(int a, int b, int n) {
    int x = (a - b) % n;
    if (x < 0) {
        x += n;
    }
    return x;
}

void uint8to26(uint8_t *in, int length, int *out) {
    for (int i = 0; i < length; i++) {
        out[i] = (int)in[i] - 65;
    }
}

void int26toAZ(int *in, int length, uint8_t *out) {
    for (int i = 0; i < length; i++) {
        out[i] = (uint8_t)in[i] + 65;
    }
}

void gs52Init(struct GSmachine *machine, uint8_t *key) {
    int k[52];
    uint8to26(key, 52, k);
    memcpy(machine->key, k, 52 * sizeof(int));
    memcpy(machine->ctl, ctl_rotor, 52 * sizeof(int));
    machine->pos = 0;
    for (int i = 0; i < 52; i++) {
        machine->r[i].pos = k[i];
        machine->r[i].fwContact = modadd(i, 1, 52);
        machine->r[i].bwContact = modsub(i, 1, 52);
        memcpy(machine->r[i].r, rotors[i], 26 * sizeof(int));
    }
}

void gs52step(struct GSmachine *machine) {
    int fwContact, bwContact, fwPos, stepPos;
    stepPos = machine->pos;
    fwContact = machine->r[stepPos].fwContact;
    bwContact = machine->r[stepPos].bwContact;
    fwPos = machine->r[fwContact].pos;
    machine->r[stepPos].pos = modadd(machine->r[stepPos].pos, machine->r[fwContact].r[fwPos], 26);
    machine->r[stepPos].fwContact = modadd(machine->r[stepPos].fwContact, machine->r[machine->ctl[stepPos]].fwContact, 52);
    machine->r[stepPos].bwContact = modadd(machine->r[stepPos].bwContact, machine->r[machine->ctl[bwContact]].bwContact, 52);
    machine->pos = modadd(machine->pos, 1, 52);
}

uint8_t gs52subFW(struct GSmachine * machine, uint8_t letter) {
    int l = letter - 65;
    for (int i = 0; i < 52; i++) {
        l = machine->r[i].r[modadd(l, machine->r[i].pos, 26)];
    }
    return l + 65;
}

uint8_t gs52subBW(struct GSmachine * machine, uint8_t letter) {
    int l = letter - 65;
    for (int i = 52 - 1; i != -1; i--) {
        l = machine->r[i].r[modsub(l, machine->r[i].pos, 26)];
    }
    return l + 65;
}

void gs52encrypt(char *infileName, char *outFilename, uint8_t *key) {
    struct GSmachine machine;
    gs52Init(&machine, key);
    uint8_t *letter;
    FILE *infile, *outfile;
    infile = fopen(infileName, "rb");
    fseek(infile, 0, SEEK_END);
    int msglen = ftell(infile);
    fseek(infile, 0, SEEK_SET);
    outfile = fopen(outFilename, "wb");
    for (int i = 0; i < msglen; i++) {
        gs52step(&machine);
        fread(&letter, 1, 1, infile);
        letter = gs52subFW(&machine, letter);
        fwrite(&letter, 1, 1, outfile);
    }
    fclose(infile);
    fclose(outfile);
}

void gs52decrypt(char *infileName, char *outFilename, uint8_t *key) {
    struct GSmachine machine;
    gs52Init(&machine, key);
    uint8_t *letter;
    FILE *infile, *outfile;
    infile = fopen(infileName, "rb");
    fseek(infile, 0, SEEK_END);
    int msglen = ftell(infile);
    fseek(infile, 0, SEEK_SET);
    outfile = fopen(outFilename, "wb");
    for (int i = 0; i < msglen; i++) {
        gs52step(&machine);
        fread(&letter, 1, 1, infile);
        letter = gs52subBW(&machine, letter);
        fwrite(&letter, 1, 1, outfile);
    }
    fclose(infile);
    fclose(outfile);
}
