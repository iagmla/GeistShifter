CC=gcc
CFLAGS=-O3 -std=c99 -w
TARGET=gs52i
all: $(TARGET)

$(TARGET): gs52i.c
	$(CC) gs52i.c $(CFLAGS) -o $(TARGET)

clean:
	$(RM) $(TARGET)
