HDR:=MULTS_OF_X.s

SRC:=main.c
OBJ:=$(SRC:.c=.o)
EXE:=$(OBJ:.o=)

all: build run

build:
	#as ./$(SRC) $(HDR) -o ./$(OBJ)
	#ld ./$(OBJ) -o ./$(EXE)
	gcc ./$(SRC) ./$(HDR) -o $(EXE)
run:
	./$(EXE)

clean:
	rm ./$(OBJ) ./$(EXE)

.PHONY:
.SILENT: build run