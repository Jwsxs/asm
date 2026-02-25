.PHONY: clean
.SILENT: build run

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
	rm -rf $(OBJ) $(EXE)
