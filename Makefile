hanoi: hanio.o stack.o
	g++ hanoi.o stack.o -o hanoi
hanoi.o:hanoi.cpp
	g++ -c hanoi.cpp
stack.o:stack.cpp
	g++ -c stack.cpp
