
fname = $(basename $(prg))

all: main

main: main.o
	g++ -Wall -o main $(fname).o

main.o: 
	g++ -c $(prg)

run: 	main 
	./main

usage:
	@echo "prg=00-template.cpp make run"

clean:
	@echo "limpando projecto..." 
	rm -rf *.o *~ main
