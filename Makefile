all: add-nbo

add-nbo: read_num.o main.o
	g++ -o add-nbo read_num.o main.o

main.o: read_num.h main.cpp
	g++ -c -o main.o main.cpp

read_num.o: read_num.h read_num.cpp
	g++ -c -o read_num.o read_num.cpp
