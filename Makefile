all:
	g++ -c main.cpp game.cpp
	g++ main.o game.o -o pilot-game -lsfml-graphics -lsfml-window -lsfml-system