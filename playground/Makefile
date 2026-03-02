.PHONY: clean
.SILENT: all build run

SRC:=main.s
OBJ:=$(SRC:.s=.o)
EXE:=$(OBJ:.o=)

all: build run

build:
	as $(SRC) -o $(OBJ)
	ld $(OBJ) -o $(EXE)

run:
	./$(EXE)

clean:
	rm -f $(OBJ) $(EXE)
