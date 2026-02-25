.PHONY: clean
.SILENT: build run clean

SRC:=main.s
OBJ:=$(SRC:.s=.o)
EXE:=$(OBJ:.o=)

all: build run

build:
	echo -e "Compiling ./\033[1m$(SRC)\033[0m into ./\033[1m$(OBJ)\033[0m"
	as $(SRC) -o $(OBJ)
	echo -e "Linking ./\033[1m$(OBJ)\033[0m into ./\033[1m$(EXE)\033[0m"
	ld $(OBJ) -o $(EXE)
	echo -e "Removing ./\033[1m$(OBJ)\033[0m for organization purposes.\n"
	rm $(OBJ)

run:
	echo -e "Running ./\033[1m$(EXE)\033[0m.\n"
	./$(EXE)

clean:
	echo -e "Cleaning ./\033[1m$(OBJ)\033[0m and ./\033[1m$(EXE)\033[0m"
	rm -rf $(OBJ) $(EXE)
