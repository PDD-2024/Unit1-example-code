main: main.cpp header.cpp
	g++ -Wall -g -o header.o -c header.cpp
	g++ -Wall -g -o main main.cpp header.o

.PHONY: clean
clean:
	rm -f main header.o