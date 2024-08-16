/* Das GeistShifter 52 */
/* by Karl Zander */

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
    machine->pos = 0;
    for (int i = 0; i < 52; i++) {
        machine->ctl[i] = i;
        machine->r[i].pos = k[i];
        machine->r[i].fwContact = modadd(i, 1, 52);
        machine->r[i].bwContact = modsub(i, 1, 52);
        for (int x = 0; x < 26; x++) {
            machine->r[i].r[x] = x;
        }
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

