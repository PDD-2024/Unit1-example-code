CC=g++
CFLAGS=-Wall -g

header.o: header.cpp header.h
	$(CC) $(CFLAGS) -g -o header.o -c header.cpp

main: main.cpp header.o
	$(CC) $(CFLAGS ) -g -o main main.cpp header.o

.PHONY: clean
clean:
	rm -rf *.o