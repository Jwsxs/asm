.GLOBL _start

_start:
	PUSH %RBP
	MOVQ %RSP, %RBP
	MOV $1, %RAX
	ADD $5, %RAX

_finish:
	MOVQ $0X3C, %RAX
	XOR %RDI, %RDI
	SYSCALL
