
fname = $(basename $(prg))

all: main

main: $(fname).o
	gcc -std=c99 -o $(fname) $(fname).o

$(fname).o: $(fname).c 
	gcc -o $(fname).o $(fname).c -g -c -Wall -pedantic

run: 	main 
	./$(fname)

debug: 	main
	sudo gdb -tui -q ./$(fname) 
# gdb -q ./$(fname) -x ./.gdbinit
# gdb -q -tui ./$(fname) -x ./.gdbinit

usage:
	@echo "prg=prg01.c make run"

clean:
	@echo "limpando projecto..." 
	rm -rf *.o *~ $(fname)

