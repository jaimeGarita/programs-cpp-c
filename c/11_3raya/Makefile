
CC := g++

HDR := algoritmo.h


main: checkeo.o main.o movimientos.o printscreen.o
	$(CC) -o main printscreen.o main.o checkeo.o movimientos.o

printscreen.o: printscreen.cpp $(HDR)
	$(CC) -c printscreen.cpp

main.o: main.cpp $(HDR)
	$(CC) -c main.cpp

checkeo.o: checkeo.cpp $(HDR)
	$(CC) -c checkeo.cpp

movimientos.o: movimientos.cpp $(HDR)
	$(CC) -c movimientos.cpp
