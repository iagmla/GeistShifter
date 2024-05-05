CC=gcc
CFLAGS=-O3 -std=c99 -w
TARGET=gs52
all: $(TARGET)

$(TARGET): gs52.c
	$(CC) gs52.c $(CFLAGS) -o $(TARGET)

clean:
	$(RM) $(TARGET)
