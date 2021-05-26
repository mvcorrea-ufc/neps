
fname = $(basename $(prg))

all: main

main: $(fname).o
	gcc -std=c99 -o $(fname) $(fname).o

$(fname).o: 
	gcc -o $(fname).o $(fname).c -c -Wall -pedantic

run: 	main 
	./$(fname)

usage:
	@echo "prg=prg01.c make run"

clean:
	@echo "limpando projecto..." 
	rm -rf *.o *~ $(fname)

