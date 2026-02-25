.PHONY: clean
.SILENT: all build run

%: %.s
	as $< -o $*.o
	ld $*.o -o $@.out

clean:
	rm -f *.o *.out
