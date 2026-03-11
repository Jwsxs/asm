# Arrays | Listas
A premissa é trabalhar com arrays (as listas), partindo do pressuposto em que são todas locais, ou seja, não é necessário alocar desta maneira:
```gas
.DATA
ARRAY_NAME: .TYPE A, B, C, ... , Z, 0 # ARRAY TERMINADO EM NULO

```
ou então
```gas
.BSS
ARRAY: .TYPE 32 # ARRAY DE 32 BYTES NÃO INICIALIZADO
```

Por ser local, têm-se como base o _stack pointer_ (**%RSP**):
```gas
.DATA
ARRAY_SIZE: .QUAD 5

.TEXT
# DEPOIS DE TODO O NECESSÁRIO
SUB (ARRAY_SIZE), %RSP
# E PARA SETAR ALGUM ÍNDICE COM VALOR
MOVL $VALUE, ÍNDICE(%RSP)
``
