all:derle bagla calistir
derle:
	g++  -c  -I "./include" ./src/main.cpp -o ./lib/main.o
	g++  -c  -I "./include" ./src/Kuyruk.cpp -o ./lib/Kuyruk.o
	g++  -c  -I "./include" ./src/Dugum.cpp -o ./lib/Dugum.o
	g++  -c  -I "./include" ./src/Radix.cpp -o ./lib/Radix.o	
	g++  -c  -I "./include" ./src/doku.cpp -o ./lib/doku.o
	g++  -c  -I "./include" ./src/hucre.cpp -o ./lib/hucre.o
	g++  -c  -I "./include" ./src/organ.cpp -o ./lib/organ.o
	g++  -c  -I "./include" ./src/sistem.cpp -o ./lib/sistem.o

bagla:
	g++  ./lib/Dugum.o ./lib/Radix.o ./lib/Kuyruk.o ./lib/main.o  ./lib/hucre.o ./lib/doku.o ./lib/organ.o ./lib/sistem.o -o ./bin/program

calistir:
	./bin/program