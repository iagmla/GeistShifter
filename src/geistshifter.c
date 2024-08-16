/* Das GeistShifter 52i */
/* by Karl Zander */

int ctl_rotor[52] = {23, 49, 44, 51, 24, 46, 48, 14, 18, 2, 20, 32, 33, 7, 1, 29, 6, 25, 43, 12, 36, 11, 9, 50, 45, 3, 4, 5, 31, 0, 34, 47, 30, 42, 21, 27, 41, 28, 10, 35, 22, 17, 26, 8, 38, 16, 13, 15, 40, 39, 37, 19};

int rotors[52][26] = {{8, 12, 15, 5, 3, 24, 0, 13, 7, 20, 23, 22, 10, 25, 16, 1, 4, 2, 17, 18, 21, 19, 11, 9, 6, 14}, {19, 3, 16, 21, 24, 15, 18, 9, 4, 2, 12, 20, 0, 5, 22, 7, 10, 8, 17, 13, 14, 6, 11, 1, 25, 23}, {10, 23, 9, 22, 25, 20, 7, 13, 0, 18, 1, 6, 4, 15, 2, 11, 3, 21, 12, 5, 17, 19, 24, 14, 8, 16}, {2, 13, 12, 6, 17, 18, 19, 22, 24, 25, 15, 9, 11, 21, 7, 3, 10, 4, 1, 14, 5, 8, 20, 0, 23, 16}, {24, 14, 0, 18, 11, 23, 8, 6, 21, 5, 17, 1, 15, 3, 20, 16, 7, 19, 2, 22, 12, 9, 10, 25, 4, 13}, {8, 23, 5, 6, 20, 0, 25, 2, 9, 24, 12, 15, 11, 18, 1, 3, 4, 19, 13, 22, 14, 17, 21, 10, 16, 7}, {20, 22, 3, 4, 6, 0, 12, 15, 2, 25, 11, 21, 14, 16, 7, 19, 10, 5, 8, 9, 17, 1, 23, 13, 18, 24}, {9, 17, 4, 6, 5, 10, 14, 1, 12, 15, 7, 0, 8, 18, 25, 16, 19, 22, 20, 21, 2, 13, 23, 11, 3, 24}, {14, 2, 0, 15, 1, 20, 3, 18, 12, 7, 4, 10, 21, 19, 8, 5, 17, 25, 16, 11, 24, 6, 9, 13, 22, 23}, {13, 7, 19, 1, 5, 2, 24, 21, 12, 17, 8, 16, 10, 9, 4, 23, 18, 15, 11, 6, 14, 20, 25, 3, 0, 22}, {2, 23, 9, 25, 19, 10, 0, 4, 7, 15, 1, 12, 13, 11, 21, 5, 24, 8, 17, 18, 14, 22, 6, 3, 20, 16}, {25, 22, 0, 11, 20, 15, 12, 19, 7, 6, 13, 14, 1, 16, 4, 23, 18, 10, 24, 21, 5, 3, 2, 8, 17, 9}, {19, 24, 8, 17, 25, 13, 11, 4, 20, 14, 6, 3, 2, 0, 10, 5, 12, 9, 15, 1, 18, 16, 7, 21, 22, 23}, {1, 19, 20, 21, 15, 12, 17, 8, 25, 18, 4, 13, 9, 6, 5, 24, 7, 11, 3, 22, 14, 16, 23, 2, 0, 10}, {14, 10, 17, 12, 23, 2, 9, 6, 22, 0, 4, 1, 20, 19, 15, 5, 21, 11, 8, 7, 3, 18, 16, 13, 25, 24}, {4, 13, 0, 6, 12, 10, 19, 9, 3, 7, 1, 23, 25, 16, 17, 2, 8, 14, 24, 11, 18, 5, 20, 15, 21, 22}, {3, 7, 15, 8, 12, 10, 25, 20, 2, 16, 24, 13, 1, 18, 23, 0, 14, 22, 21, 5, 11, 19, 9, 4, 6, 17}, {1, 15, 9, 12, 8, 10, 14, 5, 20, 22, 2, 25, 7, 4, 23, 16, 21, 3, 11, 24, 19, 6, 18, 0, 17, 13}, {7, 25, 6, 17, 15, 1, 3, 23, 12, 5, 13, 9, 2, 22, 4, 18, 8, 0, 20, 16, 10, 14, 11, 24, 21, 19}, {10, 24, 25, 8, 18, 4, 15, 20, 23, 16, 0, 9, 7, 5, 21, 3, 19, 14, 1, 17, 2, 11, 12, 13, 6, 22}, {21, 0, 10, 20, 16, 3, 2, 4, 12, 8, 23, 14, 19, 22, 24, 25, 5, 7, 11, 13, 1, 6, 9, 18, 17, 15}, {25, 14, 1, 22, 0, 24, 20, 6, 11, 19, 2, 7, 8, 3, 12, 17, 13, 16, 4, 9, 18, 15, 5, 10, 23, 21}, {10, 4, 7, 22, 2, 16, 15, 17, 24, 1, 3, 25, 5, 11, 20, 12, 0, 6, 8, 9, 19, 23, 18, 13, 14, 21}, {4, 10, 24, 1, 15, 22, 25, 23, 3, 16, 19, 20, 21, 8, 17, 5, 2, 11, 7, 18, 12, 6, 0, 13, 14, 9}, {23, 13, 15, 0, 1, 19, 22, 21, 12, 24, 8, 3, 18, 10, 25, 6, 9, 11, 5, 20, 7, 17, 16, 2, 14, 4}, {14, 0, 4, 24, 8, 9, 16, 12, 7, 21, 5, 18, 10, 6, 11, 19, 23, 20, 15, 2, 17, 13, 3, 22, 25, 1}, {7, 20, 25, 0, 8, 12, 15, 9, 6, 4, 16, 2, 10, 5, 24, 18, 14, 11, 19, 23, 3, 22, 1, 13, 21, 17}, {10, 19, 12, 14, 7, 0, 2, 17, 9, 1, 20, 22, 13, 11, 23, 16, 8, 6, 15, 21, 24, 3, 5, 25, 4, 18}, {1, 16, 22, 9, 25, 20, 13, 4, 5, 10, 8, 0, 7, 23, 18, 21, 19, 3, 14, 15, 11, 12, 24, 17, 6, 2}, {6, 10, 4, 17, 18, 23, 8, 1, 15, 20, 24, 2, 14, 11, 7, 25, 0, 22, 21, 13, 12, 5, 19, 3, 9, 16}, {22, 21, 6, 9, 18, 4, 2, 16, 3, 24, 15, 8, 7, 25, 23, 17, 14, 10, 0, 5, 11, 12, 1, 20, 19, 13}, {18, 7, 13, 21, 1, 10, 17, 6, 19, 24, 20, 25, 9, 0, 8, 23, 14, 12, 4, 2, 16, 5, 11, 3, 15, 22}, {3, 12, 19, 7, 5, 22, 24, 17, 21, 13, 0, 2, 9, 4, 11, 23, 8, 20, 16, 25, 18, 6, 15, 1, 14, 10}, {25, 18, 14, 23, 9, 6, 3, 0, 16, 11, 13, 5, 17, 2, 4, 20, 1, 24, 22, 10, 12, 19, 21, 7, 15, 8}, {1, 21, 25, 22, 12, 11, 3, 2, 19, 23, 17, 18, 4, 9, 10, 20, 0, 13, 8, 6, 24, 16, 7, 14, 15, 5}, {16, 19, 22, 7, 13, 12, 20, 18, 24, 14, 15, 6, 0, 10, 5, 3, 21, 1, 23, 11, 8, 9, 4, 2, 25, 17}, {14, 11, 13, 2, 18, 21, 9, 6, 16, 10, 25, 20, 17, 5, 0, 4, 19, 7, 3, 15, 23, 8, 1, 22, 12, 24}, {14, 25, 21, 4, 24, 18, 22, 1, 16, 2, 3, 9, 8, 7, 11, 20, 15, 23, 13, 17, 6, 5, 12, 10, 0, 19}, {21, 3, 15, 7, 25, 18, 4, 0, 14, 12, 20, 13, 16, 24, 19, 8, 1, 10, 2, 9, 5, 6, 23, 11, 22, 17}, {19, 17, 12, 11, 14, 8, 2, 20, 1, 4, 15, 10, 16, 21, 6, 9, 22, 3, 0, 24, 25, 23, 13, 7, 5, 18}, {21, 17, 20, 2, 24, 8, 5, 25, 19, 18, 7, 1, 23, 0, 11, 6, 13, 4, 22, 3, 16, 12, 15, 10, 9, 14}, {20, 11, 22, 14, 8, 19, 16, 10, 1, 0, 9, 23, 24, 18, 17, 3, 7, 4, 13, 15, 21, 5, 12, 25, 6, 2}, {12, 20, 0, 2, 24, 21, 15, 4, 18, 23, 5, 22, 19, 11, 13, 8, 6, 16, 7, 9, 10, 3, 14, 1, 25, 17}, {22, 21, 4, 13, 12, 20, 19, 6, 15, 0, 25, 3, 1, 7, 16, 17, 5, 8, 2, 14, 23, 18, 10, 9, 11, 24}, {18, 10, 4, 11, 15, 2, 23, 16, 1, 7, 3, 6, 5, 22, 21, 25, 17, 19, 0, 12, 24, 13, 14, 9, 20, 8}, {8, 6, 10, 1, 13, 9, 4, 3, 15, 18, 12, 24, 14, 19, 23, 21, 17, 5, 16, 25, 0, 11, 7, 20, 22, 2}, {23, 6, 21, 22, 13, 9, 19, 5, 25, 8, 20, 17, 4, 2, 15, 7, 1, 12, 14, 0, 24, 11, 10, 16, 3, 18}, {4, 21, 8, 10, 16, 3, 17, 22, 13, 19, 2, 9, 15, 6, 11, 12, 0, 1, 20, 7, 23, 24, 18, 25, 5, 14}, {14, 11, 0, 1, 3, 16, 13, 4, 19, 7, 20, 15, 10, 5, 22, 24, 25, 23, 21, 17, 12, 8, 9, 6, 18, 2}, {13, 24, 4, 0, 17, 20, 15, 25, 5, 18, 16, 10, 7, 21, 12, 11, 2, 22, 14, 9, 1, 8, 23, 3, 19, 6}, {10, 5, 15, 1, 21, 25, 7, 2, 20, 16, 19, 24, 3, 22, 17, 13, 18, 4, 14, 12, 9, 6, 8, 11, 0, 23}, {11, 21, 10, 7, 22, 2, 17, 9, 19, 20, 1, 14, 15, 16, 13, 24, 23, 25, 0, 8, 4, 12, 3, 5, 18, 6}};

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
        machine->pos = modadd(machine->pos, k[i], 52);
        machine->r[i].pos = k[i];
        machine->r[i].fwContact = modadd(i, 1, 52);
        machine->r[i].bwContact = modsub(i, 1, 52);
        memcpy(machine->r[i].r, rotors[i], 26 * sizeof(int));
    }
}

void gs52step(struct GSmachine *machine) {
    int fwContact, bwContact, fwPos, bwPos, stepPos, rotorPath;
    rotorPath = machine->pos;
    fwContact = machine->r[stepPos].fwContact;
    bwContact = machine->r[stepPos].bwContact;
    fwPos = machine->r[fwContact].pos;
    bwPos = machine->r[bwContact].pos;
    
    machine->r[rotorPath].pos = modadd(machine->r[rotorPath].pos, machine->r[fwContact].r[fwPos], 26);
    machine->r[rotorPath].pos = modadd(machine->r[rotorPath].pos, machine->r[fwContact].r[bwPos], 26);
    machine->r[rotorPath].fwContact = modadd(machine->r[rotorPath].fwContact, machine->r[machine->ctl[rotorPath]].fwContact, 52);
    machine->r[rotorPath].bwContact = modadd(machine->r[rotorPath].bwContact, machine->r[machine->ctl[bwContact]].bwContact, 52);
    machine->pos = modadd(machine->pos, 1, 52);
}

uint8_t gs52subFW(struct GSmachine * machine, uint8_t letter) {
    int l = letter - 65;
    //int machinePos = 0;
    for (int i = 0; i < 52; i++) {
        machine->pos = modadd(machine->pos, i, 52);
        l = machine->r[machine->ctl[machine->pos]].r[modadd(l, machine->r[i].pos, 26)];
    }
    return l + 65;
}

uint8_t gs52subBW(struct GSmachine * machine, uint8_t letter) {
    int l = letter - 65;
    int fnd, pos, machinePos;
    int c = 0;
    for (int i = 51; i != -1; i--) {
        machine->pos = modadd(machine->pos, i, 52);
        c = 0;
        while (1) {
            fnd = machine->r[machine->ctl[machine->pos]].r[c];
            if (fnd == l) {
                break;
            }
            c += 1;
        }
        l = modsub(c, machine->r[i].pos, 26);
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

