.PHONY: build clean
.SILENT: all build run

SRC:=main.s
OBJ:=$(SRC:.s=.o)

EXE:=$(OBJ:.o=)

all: build run

build:
	echo -e "Assembling \033[1m$(SRC)\033[0m onto \033[1m$(OBJ)\033[0m"
	as $(SRC) -o $(OBJ)
	echo -e "Linking and creating \033[1m$(EXE)\033[0m"
	echo -e "\n============\n\nAny compiling error should appear now:\n"
	ld $(OBJ) -o $(EXE)

run:
	./$(EXE)

clean:
	rm -f ./$(OBJ) ./$(EXE) ./*.out
