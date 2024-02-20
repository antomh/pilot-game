all:
	g++ -c main.cpp
	g++ main.o -o pilot-game -lsfml-graphics -lsfml-window -lsfml-system