CC=gcc
CFLAGS=-O3 -std=c99 -w
TARGET=gs
all: $(TARGET)

$(TARGET): gs.c
	$(CC) gs.c $(CFLAGS) -o $(TARGET)

clean:
	$(RM) $(TARGET)
